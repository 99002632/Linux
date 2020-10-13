#include "mystring.h"
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
