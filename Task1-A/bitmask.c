#include"bitmask.h"

int set(int bit,int n)
{
    bit |= (1 << (n-1));
    return bit;
}

int reset (int bit,int pos)
{
    bit &= ~(1 << (pos-1));
    return bit;
}

void query(int bit, int n)
{
    if (bit & (1 << (n - 1)))
        printf( "\n bit is set\n");
    else
        printf("\n bit is not set\n");
}


int flip(int n, int k)
{
 return (n^ (1<< (k-1)));
}
