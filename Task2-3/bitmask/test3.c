#include "bitmask.h"
int main()
{
    int n = 5, k = 3;

    printf("%d with %d-th bit set: %d \n", n, k, set(n, k));
    printf("%d with %d-th bit reset: %d \n", n, k, reset(n, k));
    printf("%d with %d-th bit flipped: %d \n", n, k, flip(n, k));
    query(5,2);
    return 0;
}
