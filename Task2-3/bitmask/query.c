#include"bitmask.h"
void query(int bit, int n)
{
    if (bit & (1 << (n - 1)))
        printf( "\n bit is set");
    else
        printf("\n bit is not set");
}
