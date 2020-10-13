#include "mystring.h"
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
