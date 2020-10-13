#include <stdio.h>
#include "mystring.h"

int main()
{
    char s1[100], s2[100];
    int compare;

    printf("\n\nEnter 1st string: ");
    scanf("%s", s1);

    printf("\n\nEnter 2nd string: ");
    scanf("%s", s2);

    mystrcmp(s1, s2);  // function call
    mystrlen(s1);
    mystrcpy(s1,s2);
    mystrcat(s1,s2);
    
    return 0;
}
