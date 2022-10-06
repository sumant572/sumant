#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1, stack[size];
void push();
void pop();
void diplay();
int main()
{
    int choice;
    while(1)
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Invalid choice");
        }
    }
}
void push()
{
    int a;
    if(top==size-1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter element to push into stack:");
        scanf("%d",&a);
        top=top+1;
        stack[top]=a;
    }
}
void pop()
{
    int a;
    if(top==size-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Poped element from stack:%d",stack[top]);
        top=top-1;
    }
}
void display()
{
    if(top==size-1)
    {
        printf("Over flow");
    }
    else
    {
        printf("Element present in the stack:");
        for(int i=top;i>=0;i--)
            printf("%d\n",stack[i]);

    }
}
