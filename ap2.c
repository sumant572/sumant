#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
   // printf("%d\n%d\n%d",a,b,c);
    sum=a+b+c;
    printf("before round of\n");
    printf("%d\n",sum);
    printf("after round of\n");
    int rou=(sum/10)*10;
    printf("%d",rou);

    FILE *pf;
    pf=fopen("D:/as/p13.txt","a");
    fprintf(pf,"%d",rou);
    fclose(pf);
    }

