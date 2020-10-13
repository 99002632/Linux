
#ifndef __BITMASK_H__
#define __BITMASK_H__

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int set(int bit,int n);
int reset (int bit,int n);
int flip(int n,int k);
void query(int bit, int n);

#endif
