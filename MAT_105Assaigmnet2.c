#include<stdio.h>
#include<string.h>
const int NUM = 31;
int array[20];
void positions(char str[], int n)
{
for (int i = 0; i < n-1; i++) {
array[i] = (str[i] & NUM); 
}
}
int main()
{
int matrix[3][3];
char str[100];
printf("Enter the string: ");
fgets(str, sizeof(str), stdin);
int mat1[10][10];
int n = strlen(str);
int matSzize;
printf("Enter the size of the matrix: ");
scanf("%d",&matSzize);
int row,column;
row = (n-1)/matSzize;
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
scanf("%d", &matrix[i][j]);
}
}
positions(str, n);
printf("\n");
for (int i = 0; i < n-1; i++) {
int j = i % matSzize;
int k = i / matSzize;
mat1[j][k] = array[i];
}
int temp[matSzize][row];
for (int i = 0; i < matSzize; i++) {
for (int j = 0; j < row; j++) {
temp[i][j] = 0;
for (int k = 0; k < matSzize; k++) {
temp[i][j] += matrix[i][k] * mat1[k][j];
}
}
}
printf("The encoded matrix is:\n");
for (int i = 0; i < matSzize; i++) {
for (int j = 0; j < row; j++) {
printf("%d ", temp[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
