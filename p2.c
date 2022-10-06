#include<stdio.h>
#include "p3.c"
int display()
{
    extern int x;
    x++;
    return x;
}

