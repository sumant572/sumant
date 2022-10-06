
#include<stdio.h>
struct node
{
    int data;
    struct node *link;

};
void main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *ptr=NULL;
    ptr=head;
    struct node *comp=NULL;
    comp=(struct node *)malloc(sizeof(struct node));
    comp->data=20;
    comp->link=NULL;
    head->link=comp;

    comp=(struct node *)malloc(sizeof(2struct node));
    comp->data=30;
    comp->link=NULL;
    head->link->link=comp;


        while(ptr!=NULL)
        {
           printf("%d\n",ptr->data);

            ptr=ptr->link;


        }
        ptr->link=comp;



}
