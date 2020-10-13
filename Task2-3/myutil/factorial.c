#include"myutils.h"
long factorial(int num)
{
   int ind;
   long int result=1;
   if(num==0)
   return 1;
   else
   {
    for( ind = 1 ; ind <= num ; ind++ )
        result = result*ind;
    return result;
   }
}
