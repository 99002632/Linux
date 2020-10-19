#!/bin/bash

#This is the micro-project task

IN_PATH="Input.csv"
OUT_PATH="Results.csv"

while IFS=',' read -r user id repo
do
    [[ $user != 'Name' ]] && echo "$user"
    [[ $id != 'Email ID' ]] && echo "$id"
    if [ "$repo" != 'Repo link' ]; then
        reposit=$repo
        git clone "$repo"
        if [ $? -eq 0 ]; then
            clone_status="Cloning is successful"
        else
            clone_status="No cloning achieved"
        fi
        repo=`echo "$repo" | cut -d'/' -f5`
        echo "REPO = $repo"
        make -C "$repo"
        if [ $? -eq 0 ]; then
            build_status="Build is successful"
        else
            build_status="makefile error"
        fi
        er=`cppcheck "$repo" | grep 'error' | wc -l`
        if [ $? -eq 0 ]; then
            Error="$er"
        fi
        make test -C $repo
        execute=`find "$repo" -name "Test*.out"`
        valgrind "./$execute" 2>log.txt
        str1=$( tail -n 1 log.txt )
        value=$(echo ${str1:24:3})
        valerr="$value"
        printf "$user,$id,$reposit,$clone_status,$build_status,$Error,$valerr\n" >> $OUT_PATH
    fi
done < "${IN_PATH}"

IFS=' '
