#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("enter the value of a,b,c");
    scanf("%d\n%d\n%d",&a,&b,&c);
    sum=a+b+c;
   //scanf("%d",&sum);
    if(sum>=sum||sum<=sum)
    {
        sum=sum/2;
    fprintf("%d",sum);
    }
    else
    {

        sum=sum/3;
        fprintf("%d",sum);
    }
}
