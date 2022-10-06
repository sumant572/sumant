#include<stdio.h>
#include<stdbool.h>
bool ar(int);
int main()
{
    int i,a[5],b[5],c;
    printf("enter the elements of a:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the elements of b :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    c=a[0],b[0];
    printf("%d",ar(c));


}
bool ar(int c)
{

    if(c==0)
    {
        printf("message");
    }
    else if(c==1)
    {
        printf("no message");
    }
}
