#include <calculator_operations.h>
#include <math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int square(int operand1)
{
    return operand1*operand1;
}

int power(int operand1, int operand2)
{
    if(operand2==0)
        return 1;
    else if(operand2==1)
        return operand1;
    else
        return pow(operand1, operand2);
}

int prime(int operand1)
{
    /* return -1 if a negative number*/
    int i,count=0;
    if (operand1<0)
        return -1;

    for(i=1;i<=operand1;i++)
    {
        if((operand1%i)==0)
        {
            count++;
        }
    }
    /*return 1 for a prime number*/
    if(count==2)
        return 1;
    /*return 0 for a non prime number*/
    else
        return 0;
}

int greater(int operand1, int operand2)
{
    if(operand1>operand2)
      return operand1;
    else 
      return operand2;
}

int smaller(int operand1, int operand2)
{
    if(operand1<operand2)
      return operand1;
    else 
      return operand2;
}

int factorial(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 1 for 0 */
  if(number == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}

int modulus(int operand1, int operand2)
{
    return operand1 % operand2;
}

int squareroot(int operand1)
{
    return sqrt(operand1);
}

double sinvalue(int operand1)
{
    return sin(operand1);
}

double cosvalue(int operand1)
{
    return cos(operand1);
}

double tanvalue(int operand1)
{
    return tan(operand1);
}

float centitometer(float operand1)
{
    return operand1/100;
}

float metertocenti(float operand1)
{
    return operand1*100;
}

float metertokm(float operand1)
{
    return operand1/1000;
}

float kmtometer(float operand1)
{
    return operand1*1000;
}

float inchtocenti(float operand1)
{
    return operand1*2.54;
}

float centitoinch(float operand1)
{
    return operand1/2.54;
}
