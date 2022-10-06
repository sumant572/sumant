#include<stdio.h>
int* fun(int [],int[]);
int main()
{
    int *ptr;
    int a[8];
    int b[8];
    printf("enter the elements");
    for(int i=0;i<8;i++)
    {

    scanf("%d",&a);
    }
    printf("enter the elements");
     for(int i=0;i<8;i++)
     {

    scanf("%d",&b);
     }
    ptr=fun(a,b);
    printf("0x%x\n",ptr);
    if(a==0 || b==0)
    {
        printf("message");
    }
    else
    {
        printf("no message");
    }
}
   int fun(int a[],int b[])
  {
    for(int i=0;i<10;i++)
    {
        if(a[i]==0 && b[i]==0)
        {
            printf("won the arbitration");
        }
        else
        {
            printf("wont won arbitration");
        }
    }
}
