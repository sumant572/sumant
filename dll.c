#include<stdio.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void main()
{
    struct node *head=NULL;
    struct node *current=NULL;
    struct node *p1=NULL;
    //node 1
    head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=10;
    head->next=NULL;
    //node 2
    current=(struct node*)malloc(sizeof(struct node));
    current->prev=head->next;
    head->next=current->prev;
    head->data=20;
    current->next=NULL;

    p1=head;
    while(p1!=NULL)
    {
        printf("%d\t",p1->data);
        p1=p1->next;
    }



}
