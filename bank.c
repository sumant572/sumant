#include<stdio.h>
#include<string.h>
struct bankapplication
{
    char name[20];
    char adhaar[15];
    char pan[12];
    char phno[10][10];
    char acc_name[10];
    int no_of_acc;
    int dep;

}s,s1;
int main()
{
    char num[2][10];
//    struct bankapplication s={"sdf","6585","r7676","56868","jhjh","68"};
//    struct bankapplication s1={"df","6585","r7676","9742087132","jhjh","68"};

     printf("Enter your name\n");
     scanf("%s",s.name);
     printf("Enter the adhaar number\n");
     scanf("%s",s.adhaar);
     printf("Enter the pan number\n");
     scanf("%s",s.pan);
     printf("Enter your phone number\n");
     scanf("%s",s.phno);

     printf("Enter your name\n");
     scanf("%s",s1.name);
     printf("Enter the adhaar number\n");
     scanf("%s",s1.adhaar);
     printf("Enter the pan number\n");
     scanf("%s",s1.pan);
     printf("Enter your phone number\n");
     scanf("%s",s1.phno);

    printf("enter the num\n");
    scanf("%s",&num);
    //printf("%d",strcmp(num,s.phno));
    if(strcmp(num,s.phno))
    {
        printf("Enter your name\n");
        printf("Enter the adhaar number\n");
        printf("Enter the pan number\n");
        printf("Enter your phone number\n");
    }
    else if(!strcmp(num,s.phno))
    {
        printf("Enter your name\n");
        printf("Enter the adhaar number\n");
        printf("Enter the pan number\n");
        printf("Enter your phone number\n");
    }
    else
    {
        printf("Invalid");
    }
}
