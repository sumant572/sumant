#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void deposite();
//int n;
struct bankapplication
{
    char name[20];
    char adhaar[15];
    char pan[12];
    char phno[10];
    char acc_name[10];
    int no_of_acc;
    int dep;

};
struct bankapplication s[3];
int main()
{
    int choice,n;
    printf("Welcome to the Bank Application!!!\n");
    printf(" 1. create\n 2. Deposite\n 3. Display\n 4. exit\n");
    printf("Enter your choice :\n");
    scanf("%d",&choice);
     printf("Enter no of people: ");
 scanf("%d",&n);

   while(choice!=0)
    {
        switch(choice)
        {
            case 1: create(n);
                    break;
            case 2: deposite();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:printf("Enter the valid choice");
                    break;
        }
    }
}

void create(int n)
{
 int i;
// printf("Enter no of people: ");
// scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("Enter your name\n");
     scanf("%s",s[i].name);
     printf("Enter the adhaar number\n");
     scanf("%s",s[i].adhaar);
     printf("Enter the pan number\n");
     scanf("%s",s[i].pan);
     printf("Enter your phone number\n");
     scanf("%s",s[i].phno);
//     fflush(stdin);
 }
 //fflush(stdin);
}

void deposite()
{
    int i,n;
    printf("Enter the phno");
    scanf("%s",s->phno);
    printf("Enter no of people");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter how many acc you have");
        scanf("%d",&s->no_of_acc);
        for(i=0;i<s->no_of_acc;i++)
        {
            printf("Enter the acc name");
            scanf("%s",s->acc_name);
            printf("Enter the amount");
            scanf("%d",&s->dep);
        }
    }
}

void display()
{
    int ph_no,i;
    printf("Enter the pho :");
    scanf("%d",&ph_no);
    printf("Enter how many acc you have");
    scanf("%d",&s->no_of_acc);
    for(i=0;i<s->no_of_acc;i++)
    if(ph_no==s->phno)
    {
        printf("The name is : %s ",s[i].name);
        printf("The phone no is :%s",s[i].phno);
        printf("The PAN no is : %s",s[i].pan);
        printf("The adhaar no is :%s",s[i].adhaar);

    for(i=0;i<s->no_of_acc;i++)
    {
        printf("The acc %s has %d ",s->acc_name,s->dep);
    }
    }
    else
    {
        printf("Invalid account \n");
    }
}
