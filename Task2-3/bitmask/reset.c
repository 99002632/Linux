#include"bitmask.h"
int reset (int bit,int pos)
{
    bit &= ~(1 << (pos-1));
    return bit;
}
