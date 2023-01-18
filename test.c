#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[22];
    int id;
    char Address;
    int age;
    char department;
    int admission_fee;
}stuInfo[20];

int index=0;

void InsertInfo(int i){
   
    printf("Enter id: ");
    scanf("%d",&stuInfo[i].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(stuInfo[i].name);
    fflush(stdin);
    printf("Enter Address: ");
    gets(stuInfo[i].Address);
    printf("Enter department: ");
    gets(stuInfo[i].department);
    printf("Enter Age: ");
    scanf("%f",&stuInfo[i].age);
    printf("Enter Admission_fee: ");
    scanf("%f",&stuInfo[i].admission_fee);

}

void Display(int j){
    for(int i=0; i< j ; i++){
        printf("ID: %d\n",stuInfo[i].id);
        printf("NAME: %s\n",stuInfo[i].name);
        printf("Age: %.2f\n\n",stuInfo[i].age);
        printf("Address: %s\n",stuInfo[i].Address);
        printf("Admission_fee: %.2f\n\n",stuInfo[i].admission_fee);
        printf("Department: %s\n",stuInfo[i].department);
        
    }
}
int main(){

    int ch;

    while(1){
        system("cls");
        printf("1.Add Student\n");
        printf("2.student List\n");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 0:
            exit(0);

        case 1:
            InsertInfo(index++);
            break;

        case 2:
            Display(index);
            break;

        default:
            printf("Invalid Choice...\n\n");

        }
        printf("Press Any Key To Continue...\n");
        getch();
    }
}