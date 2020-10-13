#include "myutils.h"

int main()
{
    long int num;
    int i;
    printf("Enter the Number");
    scanf("%d",&num);
    i=isPrime(num);
    print("%d",i);
    printf("\n Factorial of num :%ld",factorial(num));
    printf("\n Palindrome :%ld",isPalindrome(num));
    printf("\n Vsum is:%ld",vsum(3,3,4,5));
    return 0;
}
