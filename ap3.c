#include<stdio.h>
int main()
{

    int a,b,y,z;
    printf("enter the value of a and b:");
    scanf("%d\n%d",&a,&b);
    if(a>=0&& a<=21 || b>=0&&b<=21)
    {
        if(21<=a||21<=b)
        {
        printf("%d\n",21);
        }
    }
    else
        {

        printf("0");
    }

}

