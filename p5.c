#include<stdio.h>
#include"p6.c"

int display()
{
    extern int x;
    x++;
    return x;
}
