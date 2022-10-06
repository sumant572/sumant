#include<stdio.h>
#define pi 3.142
int main()
{
    int r=2;
    float area,circumference;
    //printf("enter radius:");
    //scanf("%d",&r);
    area=pi*r*r;
    printf("area of circle is %f\n",area);
    circumference=2*pi*r*r;
    printf("circumference of circle is %f",circumference);
}

