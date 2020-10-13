#include "myutils.h"
#include <stdio.h>
#include "mystring.h"
#include "bitmask.h"

int main()
{
    int n = 5, k = 3;

    printf("%d with %d-th bit set: %d \n", n, k, set(n, k));
    printf("%d with %d-th bit reset: %d \n", n, k, reset(n, k));
    printf("%d with %d-th bit flipped: %d \n", n, k, flip(n, k));
    query(5,2);
 
    long int num;
    int i;
    printf("Enter the Number");
    scanf("%ld",&num);
    i=isPrime(num);
    printf("%d",i);
    printf("\n Factorial of num :%ld",factorial(num));
    printf("\n Palindrome :%d",isPalindrome(num));
    printf("\n Vsum is:%d",vsum(3,3,4,5));

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
