#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int front=-1,rear=-1,queue[MAX];
void insert();
void delete();
void diplay();
int main()
{
    int choice;
    while(1)
    {
        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                    break;
            case 2:delete();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Invalid choice");
        }
    }
}
void insert()
{
    int a;
    if(rear==MAX-1)
    {
        printf("Overflow");
    }
    else
    {
        if(front==-1)
        {
            front=0;
            printf("Enter element to insert into queue:");
            scanf("%d",&a);
            rear=rear+1;
            queue[rear]=a;
        }
    }
}
void delete()
{
    int a;
    if(front==-1 || front>rear)
    {
        printf("Underflow");
    }
    else
    {
        printf("Deleted element from queue:%d",queue[front]);
        front=front+1;
    }
}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Element present in the queue:");
        for(int i=front;i<=rear;i++)
            printf("%d\n",queue[i]);

    }
}

