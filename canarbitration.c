#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    printf("enter the binary number for a:",a);
    scanf("%d",&a);
    printf("enter th binary number for b:",b);
    scanf("%d",&b);
    if(a==0 || b==0)
    {
        printf("it contains message");
    }
    else if(a==1 || b==1)
    {
        printf("it doesnot contain message");
    }


}
