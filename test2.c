#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <string.h>

int i=0;
struct sinfo {
	char fname[8];
	char lname[8];
	char roll[10];
	float cgpa[3];
	char cid[6];
} st;

FILE *fp;
long sz = sizeof(st);
int main()

{
	int choice;
	while (1) {
         system("cls");
		printf("Welcome to Student Management System\n\n\n");
        printf("\n1.Student Info: ");
		printf("\n2. Add the Student Details: ");
		printf("\n3. Find the Student "
			"Details by Roll Number: ");
		printf("\n4. Find the Student "
			"Details by First Name: ");
		printf("\n7. Delete the Students Details"
			" by Roll Number: ");
		printf("\n8. Update the Students Details"
			" by Roll Number: ");  
		printf("\n9. To Exit\n");
		printf("\nEnter your choice to "
			"find the task: ");
		scanf("%d", &choice);
		switch (choice) {
        case 1:
        Display();
        break;
		case 2:
			add_student();
			break;
		case 3:
			find_rl();
			break;
		
		case 4:
			exit(0);
			default:
			printf("Invalied choice\n");
		}
        printf("Press any key to continue...");
        getch();
	}
	return 0;
}


void add_student()
{   
   
    fp = fopen("student.txt", "ab");

	printf("Enter the first "
		"name of student\n");
		fflush(stdin);
	gets( st.fname);
	printf("Enter the last name"
		" of student\n");
		fflush(stdin);
	gets( st.lname);
	printf("Enter the Roll Number\n");
	
    scanf("%s",&st.roll);
	printf("Enter the CGPA "
		"you obtained\n");
	scanf("%s",&st.cgpa);

    printf("Enter the course ID"
		" of each course\n");
	scanf("%s",st.cid);
	
   fwrite(&st,sz,1,fp);
	printf("Saved your details\n");
	fclose(fp);
}




void Display(){
   system("cls");
   printf("Student Information->\n");
   printf("%-2s %-20s %-10s %-10s %-10s\n", "Name","lastName","Roll","CCGPA","Course_Id\n");
   fp = fopen("student.txt","rb");
   while(fread(&st,sz,1,fp)==1)
  {
    printf("%-20s %-2s %-10s %-10s %-10s\n",st.fname,st.lname,st.roll,st.cgpa,st.cid);
  }
  fclose(fp);
}



void find_rl()
{
    system("cls");
	char rl[9];
    int f=0;
    printf("Enter your Roll: \n");
    scanf("%s",&rl);
    printf("%-20s %-2s %-10s %-10s %-10s\n", "Name","lastName","Roll","CCGPA","Course_Id\n");
    fp = fopen("student.txt", "rb");
  while(fread(&st,sz,1,fp)==1)
   {
     
    if(rl == st.roll){
          printf("%-20s %-2s %-10s %-10s %-10s\n",st.fname,st.lname,st.roll,st.cgpa,st.cid);
		f=1;
		break;
      
    }
    
   }
   fclose(fp);
  if(f==0){
  printf("Student not found.\n");
  }
  else{
   printf("Student found successfully.\n");
  }
    
  
}
void find_rl()
{
    system("cls");
	char rl[9];
    int f=0;
    printf("Enter your Roll: \n");
    scanf("%s",&rl);
    printf("%-20s %-2s %-10s %-10s %-10s\n", "Name","lastName","Roll","CCGPA","Course_Id\n");
    fp = fopen("student.txt", "rb");
  while(fread(&st,sz,1,fp)==1)
   {
     
    if(rl == st.roll){
          printf("%-20s %-2s %-10s %-10s %-10s\n",st.fname,st.lname,st.roll,st.cgpa,st.cid);
		f=1;
		break;
      
    }
    
   }
   fclose(fp);
  if(f==0){
  printf("Student not found.\n");
  }
  else{
  
  }
    
  
}
