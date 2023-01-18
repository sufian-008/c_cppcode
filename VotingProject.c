#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct voter_information
{
    char national_id[20];
    char name[50];
    struct voter_information *next;
}node;
node *head;
node *space,*start=NULL;
node *main_logs(node *);
node *voter_insert(node *);
void admin();
void winner();
void voting();
void show();
void stop();
void exi();

int count=0,R=3,vote=0;
int vote1=0,vote2=0;

int main()
{
    while(1)
    {
        system("cls");
        printf("\n\n\n");
        printf("\t ** WELCOME TO THE Electric VOTING SSYSTEM **  \n\n");

    printf("\t  *********************************************** \n\n\n\n\n");
    printf(" \t\t **Please Enter One(1) for logging vote main Logs**\n\n\n");
       int var_for_one;
       scanf("%d",&var_for_one);
       if(var_for_one==1)
       {
           start=main_logs(start);
       }
    }



    return 0;
}
node *main_logs(node *start)
{
       system("cls");
    printf("\n\n\n");
    printf("        \t\t\t1. FOR VOTE ENTRY     \n");
    printf("        \t\t\t2. FOR ADMIN PANEL    \n");
    printf("        \t\t\t3. FOR WINNER         \n");
    printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
    printf("    \t *******So Plz Enter*******\n\n\n");
    int T;
    scanf("%d",&T);
     if(T==1)
    {
       start= voter_insert(start);
    }
    if(T==2)
    {
      admin();
    }
    if(T==3)
    {
      winner();
    }
    if(T!=1||T!=2||T!=3)
    {
    	main_logs(start);
	}


    return start;
}
node *voter_insert(node *start)
{

    node *temp;
     char name[50],national_id[20];
     system("cls");
     printf("\n\n\n\n");
     printf("\t IF ID AND YOUR NAME MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
     printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
     printf("\t\tPlease \n");
     printf("\t\t\tEnter your national ID number: ");
     gets(national_id);
     gets(national_id);


     printf("\t\t\tEnter Your NAME:  ");
     gets(name);
     temp=(node*)malloc(sizeof(node));
     strcpy(temp->national_id,national_id);
     strcpy(temp->name,name);
     temp->next=NULL;
     head=temp;
     while(temp!=NULL)
     {
      if((strcmp(temp->national_id,"1001")==0&& strcmp(temp->name,"sakib al hasan")==0)||
         (strcmp(temp->national_id,"1002")==0&& strcmp(temp->name,"tamim iqbal")==0)||
         (strcmp(temp->national_id,"1003")==0&& strcmp(temp->name,"mushfiqur rahim")==0) ||
         (strcmp(temp->national_id,"1004")==0&& strcmp(temp->name,"mashrafi bin mortaza")==0))
         {
             R=3;
         	voting();

         }
         else
         {

              R--;
         if(R==0)
         {
             stop();
             break;
         }
         printf("\n\n\n\n");
         printf("\tYour NATIONAL ID or NAME is wrong\n\n");
         printf("\t\t\tPlease Re-Enter\n\n");
         system("pause");
        start= main_logs(start);
            }
            temp=temp->next;
     }
     return start;


}
void voting()
{
     system("cls");
    printf("\n\n\n\n");
    printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");

    printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");

    printf("\t\t\t 1.SHEKH HASINA               1.BOAT\n");
     printf("\t\t\t 2.KHALEDA ZIA             2.GRAIN OF RICE\n");


       int B,j;
       printf("\n\t\t\tPlease \n");
       printf("\t\t Enter Your Choice \n");
       for(j=1;j<=1;j++)
       {
           scanf("%d",&B);

           if(B==1)
           {
               vote1++;
               printf("\n\n\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO ''SHEKH HASINA''\n");
               break;

           }
           if(B==2)
           {
               vote2++;
                printf("\n\n\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO ''KHALEDA ZIA''\n");
               break;

           }
            if(B!=1||B!=2)
           {
           	printf("\n\t\t****INVALID CHOICE ENTERED******\t\t\n");
           	printf("\n\t\tENTER AGAIN\t\tn");
		   }



       }
	   printf("\n\n*************************THANK YOU**************************\n\n");
	   printf("press any key");
	   getch();
}
void admin()
 {
     int B;
     printf("\n\n\n\n");
     printf("\t\tEnter Your Password To Unlock The Admin Panel\n\n");
     scanf("%d",&B);
     if(B==7277)
     {
         show();

     }
     else
     {
         printf("Wrong Password\n");
     }
 }
 void show()
  {
  	int G;
      system("cls");

      printf("\n\n\n\n");
      printf("\t\t\tPresent Vote Count :\n\n");

      printf("\t\t  ''Shekh Hasina'' is on     %d Votes\n",vote1);

      printf("\t\t ''Khaleda Zia'' is on     %d Votes\n",vote2);



      printf("\t\tEnter Any Key For Main Logs\n\n\t\tOR\n\n\t\tENTER THE SPECIAL PASSWORD TO CLOSING VOTING PORTAL\n ");
    scanf("%d",&G);
    if(G==123)
    exi();
    else
    main_logs(start);

  }
  void winner()
   {
       system("cls");
       printf("\n\n\n\n");
       if(vote1>vote2)
        printf("\t\t\tThe present Winner is Shekh Hasina and she has got %d votes\n\n\n\n",vote1);
       else if(vote2>vote1)
         printf("\t\t\tThe present Winner is Khaleda Zia and she has got %d votes\n\n\n\n",vote2);
        else
        printf("\t\tResult equal!!! this is %d\n\n\n",vote1);
        printf("\t\tEnter Any Key for Main Log\n\n");
        getch();
        main_logs(start);

   }

   void stop()
   {
       system("cls");

       printf("\n\n\n");
       printf("\t\t (:-SORRY YOU ENTERED WRONG DETAILS FOR THREE(3) TIMES -:) \n\n\n");
       printf("\t\tPlease try again After A few Moment\n\n\n");

       printf("\t\t* * Thank You * *  \n\n\n");

       printf("press any key");
       getch();

   }

    void exi()
   {
       system("cls");

       printf("\n\n\n\n\n");

       printf("\t\t   **YOU ARE NOW EXITING THE PORTAL**   \n\n");

       printf("\t\t * * Thank You For Using This ONLINE PLATFORM For VOTING * *  \n\n");
       exit(0);
}