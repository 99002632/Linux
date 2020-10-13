target:all out clean
all:bitmask.o mystr.o myutils.o
	gcc -Iinclude src/bitmask.c src/mystr.c src/myutils.c test.c -o all.out
bitmask.o:
	gcc -c -Iinclude src/bitmask.c 
mystr.o:
	gcc -c -Iinclude src/mystr.c
myutils.o:
	gcc -c -Iinclude src/myutils.c
clean: 
	rm -rf *.o *.out
out:

