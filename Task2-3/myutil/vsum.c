#include"myutils.h"
int vsum(int number,...)
{
    int ind;
    int first, a;
    
    va_list vlist;
    va_start(vlist,number);
  
    int sum=0;
    
    for (ind = 1; ind <= number; ind++) 
        sum+=va_arg(vlist,int);

    va_end(vlist);
    return sum;
}
