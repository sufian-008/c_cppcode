#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef struct voter_information
{
    char nationa_id[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
} node;

node *head;
node *space,*start=NULL;
node *search(char x[],char y[],char z[],node *,int *);
node *voter_insert(node *);
node *main_logs(node *);
 void admin();
 void winner();
 	void exi();
 	void voting();
 	void not_again();
 	void stop();
 	void show();


int count=0,R=3,vote=0;
int vote1=0,vote2=0;
int main()
{
	while(1){

    system("cls");
    printf("\n\n\n");
    printf("\t            **** WELCOME TO THE Electric VOTING SSYSTEM ****        \n\n");

    printf("\t           *************************************************        \n\n\n\n\n");
    printf("        \t\t ***Please Enter One(1) for logging vote main Logs***    \n\n\n");
    int BB;

    scanf("%d",&BB);
    if(BB==1)
    {
      start=  main_logs(start);
    }

}
    return 0;
}

node *main_logs(node *start)
{
    system("cls");
    printf("\n\n\n");
    printf("        \t\t\t1. FOR VOTE ENTRY     \n");
    Sleep(300);
    printf("        \t\t\t2. FOR ADMIN PANEL    \n");
    Sleep(300);
    printf("        \t\t\t3. FOR WINNER         \n");
    printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
    Sleep(500);
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
	int UNIVERSAL=0;
int *z;
 z = &UNIVERSAL;
     node *temp;
     char name[50],birth_date[15],nationa_id[20];
     system("cls");
     printf("\n\n\n\n");
     printf("\t IF nationa_id ID, YOUR NAME AND YOUR DATE OF BIRTH MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
     Sleep(300);
     printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
     Sleep(300);
     printf("\t\tPlease \n");
     Sleep(300);
     printf("\t\t\tEnter your nationa_id ID number: ");
     gets(nationa_id);
     gets(nationa_id);
     printf("\t\t\tEnter Your NAME:  ");
     gets(name);
     printf("\t\t\tEnter Your BIRTH DATE  in dd-mm-yyyy format: ");
     gets(birth_date);
     temp=(node *)malloc(sizeof(node));
     strcpy(temp->nationa_id,nationa_id);
     strcpy(temp->name,name);
     strcpy(temp->birth_date,birth_date);
     temp->next=NULL;
     head=temp;
     while(temp!=NULL)
     {
         if((strcmp(temp->nationa_id,"12346")==0&& strcmp(temp->name,"Shaikh Hasina")==0 &&strcmp(temp->birth_date,"12-12-2022")==0) ||
         (strcmp(temp->nationa_id,"12345")==0&& strcmp(temp->name,"Khaleda Jiya")==0 &&strcmp(temp->birth_date,"01-02-2022")==0))
         if((strcmp(temp->nationa_id,"1234")==0&& strcmp(temp->name,"Mehadi")==0 &&strcmp(temp->birth_date,"12-12-2022")==0) ||
         (strcmp(temp->nationa_id,"12345")==0&& strcmp(temp->name,"Khaleda Jiya")==0 &&strcmp(temp->birth_date,"01-02-2022")==0))

         {
         	R=3;
         	start=search(temp->nationa_id,temp->name,temp->birth_date,start,&UNIVERSAL);

         	if(UNIVERSAL==0)
            {
            	 voting();
			}
            else
             {
             	not_again();
			 }
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
         printf("\tYour nationa_id ID or NAME or DATE OF BIRTH is wrong:  \n");
         Sleep(300);
         printf("\t\t\tPlz Re-Enter\n\n");
         Sleep(300);
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
    Sleep(300);
    printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1.Shaikh Hasina                1.Nowka\n");
    Sleep(300);
    printf("\t\t\t 2.Khaleda Jiya                 2.Dhaner sish\n\n\n");

       int B,j;
       printf("\t\t\t Plzz, \n");
       printf("\t\t\t Enter Your Choice \n");
       for(j=1;j<=1;j++)
       {
           scanf("%d",&B);

           if(B==1)
           {
               vote1++;
               printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO Shaikh Hasina\n");
               break;

           }
           if(B==2)
           {
               vote2++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO Khaleda Jiya\n");
               break;

           }
             if(B!=1||B!=2)
           {
           	printf("\n\t\t************* INVALID CHOICE*************\t\t\n");
           	printf("\n\t\t\tENTER AGAIN\t\t\t\n");
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
     printf("\t\t\t\t\tEnter Your Password To Unlock The Admin Panel\n\n");
     scanf("%d",&B);
     if(B==1234)
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
      Sleep(500);
      printf("\t\t\t  Shaikh Hasina is on     %d Votes\n",vote1);
      Sleep(500);
      printf("\t\t\t  Khaleda Jiya is on      %d Votes\n",vote2);
     
      printf("\t\t\t\t\tEnter Any Key For Main Logs\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\tEnter the password for closing voting machine\n ");
    scanf("%d",&G);
    if(G==1234)
    exi();
    else
    main_logs(start);

  }

   void winner()
   {
       system("cls");
       printf("\n\n\n\n");
       if(vote1>vote2)
        printf("\t\t\tThe  Winner is Shaikh Hasina and she has got %d votes\n",vote1);

       if(vote1<vote2 )
        printf("\t\t\tThe  Winner is Khaleda jiya and she has got %d votes\n",vote2);

        printf("\t\t\t\tEnter Any Key for Main Log\n\n");
        getch();
        main_logs(start);

   }

   void stop()
   {
       system("cls");

       printf("\n\n\n\n");
       printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
       Sleep(500);
       printf("\t\t\t Plz try again After A few Moment\n\n\n");
       Sleep(500);
       printf("\t\t\t * * Thank You * *  \n\n\n");
       Sleep(500);
       printf("press any key");
       getch();

   }

   void not_again()
   {
        int A;
		system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t        *YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY*       \n\n\n");
        Sleep(300);
        printf("\t\t\t        *YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE*     \n\n\n");
        Sleep(300);
        printf("\t\t\t If You want to see present winner Enter One(1) or Enter Any Other Key for Main  Logs\n\n");
        Sleep(300);

        scanf("%d",&A);
        if(A==1)
        {
            winner();
        }
        else
        {
            main_logs(start);
        }

   }

   void exi()
   {
       system("cls");

       printf("\n\n\n\n\n");
       Sleep(500);
       printf("\t\t\t        *YOU ARE NOW EXITING*       \n\n\n");
       Sleep(1000);
       printf("\t\t\t * * Thank You For Using VOTING MACHINE * *  \n\n\n");
       Sleep(1000);
       exit(0);
   }
node *search(char x[],char y[],char z[],node *start,int *Y)
{
	 *Y=0;
  node *t,*space;
  if(start==NULL)
  {
      space=(node*)malloc(sizeof(node));
     strcpy(space->nationa_id,x);
     strcpy(space->name,y);
     strcpy(space->birth_date,z);

      start=space;
      space->next=NULL;

  }
  else
  {
      t=start;
      while(t!=NULL)
       {
          if((strcmp(t->nationa_id,x)==0&& strcmp(t->name,y)==0 &&strcmp(t->birth_date,z)==0))
          {
          	*Y=1;

          	break;
          }
              t=t->next;
    	}

          if(*Y==0)
          {

          	space=(node*)malloc(sizeof(node));

       		strcpy(space->nationa_id,x);

       		strcpy(space->name,y);

       		strcpy(space->birth_date,z);
	        t=space;
    	    space->next=NULL;

    	}
  }
  return start;
 }