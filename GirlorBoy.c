#include<stdio.h>
#include<stdlib.h>


struct studentinf{
    int id;
    char Name[50];
    char cid[50];
    
}b;

struct student{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char Name[50]    
}s;

FILE *fp;

int main(){

    int ch;

    while(1){
        system("cls");
        printf("<== Library Management System ==>\n");
        printf("1.Add Student\n");
        printf("2.student List\n");
        printf("3.Remove Student Information\n");
        printf("4.Find Student");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 0:
            exit(0);

        case 1:
            addBook();
            break;

        case 2:
            studentinfList();
            break;

        case 3:
            del();
            break;
        case 4:
        find_rl();
        default:
            printf("Invalid Choice...\n\n");

        }
        printf("Press Any Key To Continue...\n");
        getch();
    }

    return 0;
}


void addBook(){

    fp = fopen("studentinf.txt", "ab");

    printf("Enter book id: ");
    scanf("%d", &b.id);

    printf("Enter Student name: ");
    fflush(stdin);
    gets(b.Name);

    printf("Enter  Department Name: ");
    fflush(stdin);
    gets(b.cid);

    printf("Book Added Successfully\n");

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
}


void studentinfList(){

    system("cls");
    printf("<== Available student info ==>\n\n");
    printf("%-10s %-30s %-20s \n\n", "Student id", "Student Name", "Department");

    fp = fopen("studentinf.txt", "rb");
    while(fread(&b, sizeof(b), 1, fp) == 1){
        printf("%-10d %-30s %-20s \n", b.id, b.Name, b.cid);
    }

    fclose(fp);
}

void del(){
    int id, f=0;
    system("cls");
    printf("<== Remove student info ==>\n\n");
    printf("Enter Student id to remove: ");
    scanf("%d", &id);

    FILE *ft;

    fp = fopen("studentinf.txt", "rb");
    ft = fopen("temp.txt", "wb");

    while(fread(&b, sizeof(b), 1, fp) == 1){
        if(id == b.id){
            f=1;
        }else{
            fwrite(&b, sizeof(b), 1, ft);
        }
    }

    if(f==1){
        printf("\n\nDeleted Successfully.");
    }else{
        printf("\n\nRecord Not Found !");
    }

    fclose(fp);
    fclose(ft);

    remove("studentinf.txt");
    rename("temp.txt", "studentinf.txt");

}


void find_rl()
{
    system("cls");
	int id, f=0;
    system("cls");
    printf("Finding........\n\n");
    printf("Enter Student id to find: ");
    scanf("%d", &id);
 fp = fopen("studentinf.txt", "rb");
    printf("%-10s %-30s %-20s \n\n", "Student id", "Student Name", "Department");
    while(fread(&b, sizeof(b), 1, fp) == 1){
        if(id == b.id){
            f=1;
             printf("%-10d %-30s %-20s \n", b.id, b.Name, b.cid);
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
