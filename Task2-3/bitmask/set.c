#include"bitmask.h"
int set(int bit,int n)
{
    bit |= (1 << (n-1));
    return bit;
}
