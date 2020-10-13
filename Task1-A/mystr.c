#include "mystring.h"

int mystrlen(char str[])
{
    int len;
    for(len=0; str[len]!='\0'; ++len);
    printf("\n Length of the given string: %d",len);
    return len;
}

void mystrcpy(char str1[] ,char str2[])
{
	int ind;
    for (ind = 0; str1[ind] != '\0'; ++ind)
    {
            str2[ind] = str1[ind];
    }
    str2[ind] = '\0';
    printf("str2: %s", str2);
}

void mystrcat(char str1[], char str2[])
{
    int length = 0;
    int j;
    while (str1[length] != '\0')
    {
        ++length;
    }
    for (j = 0; str2[j] != '\0'; ++j, ++length)
    {
        str1[length] = str2[j];
    }
    str1[length] = '\0';
    printf("After concatenation: ");
    puts(str1);
}

void mystrcmp(char str1[] ,char str2[])
{
   int count = 0;
   while (str1[count] == str2[count] && str1[count] != '\0')
      count++;
   if (str1[count] > str2[count])
      printf("str1 is greater than str2");
   else if (str1[count] < str2[count])
      printf("str1 is less than str2");
   else
      printf("str1 is equal to str2");
      
}
