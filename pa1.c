#include<stdio.h>
int main()
{
    int *ptr;
    int *ptr1;
    //char a[5];
    ptr=(int*)calloc(5,sizeof(int));
    printf("Enter the string:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);

    }
    ptr1=(int *)realloc(ptr,(3,sizeof(int)));
    for(int i=5;i<12;i++)
    {
        scanf("%d",&ptr1[i]);
    }
    for(int i=0;i<12;i++)
    {
        printf("%d\t",ptr1[i]);
    }
        free(ptr);
        free(ptr1);
    }
