#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};head=NULL;
void deletion(struct node* del_node)
{
    if(head==NULL||del_node==NULL)
        return;
    if(head==del_node)
        head=del_node->next;
    if(del_node->next!=NULL)
        del_node->next->prev=del_node->prev;
     if(del_node->next!=NULL)
        del_node->prev->next=del_node->next;

        free(del_node);

}
void inertionatmiddle()
{
    int n,s,i=0;
    printf("which position do you want to insert:");
    scanf("%d",&s);
    printf("Enter the insert value:");
    scanf("%d",&n);
    struct node *new_node=NULL;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=head;
    new_node->data=n;
    for(i=0;i<s;i++)
        ptr=ptr->next;
         new_node->data=n;
    new_node->next=ptr->next;
    new_node->prev=ptr;
    ptr->next=new_node;
    ptr->next->prev=new_node;
}
void insertionattheend()
{
    int n;
    printf("Enter the new node value");
    scanf("%d",&n);
    struct node *new_node=NULL;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=head;
    new_node->data=n;
    new_node->next=NULL;
    while(ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=new_node;
    new_node->prev=ptr;
}
void insertionatfirst()
{
    int n;
    struct node *new_node=NULL;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the new value");
    scanf("%d",&n);
    struct node *ptr=head;
    if(ptr==NULL)
    {
        new_node->data=n;
        new_node->next=NULL;
        new_node->prev=NULL;
        head=new_node;
    }
    else
        {
            new_node->data=n;
            new_node->next=ptr;
            new_node->prev=NULL;
            head=new_node;
        }
}
void printDoublyLinkedList()
{
    struct node *ptr=head;
    printf("NULL<---");
    while(ptr!=NULL)
    {
        printf("%d<--->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));

    one->data=1;
    two->data=2;
    three->data=3;

    one->prev=NULL;
    one->next=two;

    two->prev=one;
    two->next=three;

    three->prev=two;
    three->next=NULL;

    head=one;

    printDoublyLinkedList();
    insertionatfirst();
      printDoublyLinkedList();
      insertionattheend();
       printDoublyLinkedList();
       inertionatmiddle();
        printDoublyLinkedList();
        deletion(head);
        printDoublyLinkedList();




    return 0;
}