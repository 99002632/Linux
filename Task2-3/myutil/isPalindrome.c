#include"myutils.h"
int isPalindrome(int num)
{
    int rnum=0,rem,cp;
    cp=num;
    while(cp>0)
    {
        rem=cp%10;
        rnum=rnum*10+rem;
        cp=cp/10;
    }
    if(rnum==num)
        return 1;
    else
        return 0;
}
