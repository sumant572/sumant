#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
void main()
{
    struct node *h=NULL;
    struct node *c=NULL;
    struct node *p1=NULL;
    struct node *p2=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    h->data=10;
    h->link=NULL;
    c=(struct node*)malloc(sizeof(struct node));
    h->link=c;
    c->data=20;
    c=(struct node*)malloc(sizeof(struct node));
    c->link=NULL;
    c->data=30;
    h->link->link=c;
    p1=h;
    while(p1!=NULL)
    {
        printf("%d\t",p1->data);
        p1=p1->link;
    }
    printf("\n");
    //adding nodes in middle
    c=(struct node*)malloc(sizeof(struct node));
    c->data=40;
    p1=h->link;
    c->link=p1->link;
    p1->link=c;
    p1=h;
    while(p1!=NULL)
    {
        printf("%d\t",p1->data);
        p1=p1->link;
    }
    printf("\n");
    // adding nodes in front
    c=(struct node*)malloc(sizeof(struct node));
    c->data=50;
    c->link=h;
    h=c;
    p1=h;
    while(p1!=NULL)
    {
        printf("%d\t",p1->data);
        p1=p1->link;
    }
}
