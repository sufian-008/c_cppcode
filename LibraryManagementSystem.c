#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define len 200


struct node
{
    int id;
    char name[len],author[len],publisher[len];
    struct node *next;
};
struct node *temp,*newnode,*head=0;
int count=0;



void insert()
{
    newnode=(struct node *) malloc(sizeof(struct node));
    newnode->next=0;

    printf("\nEnter Book ID Number : ");
    scanf("%d",&newnode->id);

    printf("\nEnter Book Name : ");
    scanf(" %s",newnode->name);

    printf("\nEnter Author Name : ");
    scanf(" %s",newnode->author);

    printf("\nEnter Publisher Name : ");
    scanf(" %s",newnode->publisher); 


    if(head==0)
    {
        head=newnode;
        temp=newnode;
        count++;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        count++;
    }
}


void display()
{
system("cls");
    if(head==0)
    {
        printf("Libary is Empty \n\n");
    }
    else
    {
        printf("\nID \t\tBook Name\tAuthor Name\tPublisher Name\n");
        printf("________________________________________________________________\n");
        temp=head;
        while(temp !=0)
        {

            printf("\n%d\t\t%s\t\t%s  \t\t%s\n",temp->id,temp->name,temp->author,temp->publisher);
           temp=temp->next;
        }
    }
    printf("please enter any key to continue...");
    getch();
}




void sort_libary()
{
   
    if(head==0)
    {
        printf("\n\tLIBARY IS EMPTY ");
    }
    else
    {
        temp=head;
         free(temp);
         head=0;
    }
    
}





int main()


{

    while(1)

    {


        printf("\n\t\t\t\tLIBARY MENAGEMENT SYSTEM\n\n\n");
        printf("\t\t\t1.INSERT NEW BOOK  ");
        printf("\n\t\t\t2.DISPLAY  \n");
        printf("\t\t\t3.SORT BOOK \n");
        printf("\t\t\t4.Exit \n");
        printf("\nEnter Your Choice : ");
        int choice;
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
        case 3:
            sort_libary();
            break;
            case 4:
            exit(1);
            break;
        default:
            printf("ENTER CORRECT OPTION !!!!!!!!");
        }

    }

}