#include<stdio.h>
int main(){

int array[100],size,sum=0;
printf("Enter array size: ");
scanf("%d",&size);

printf("Enter array Elements: ");
for(int i =0; i<size; i++)
scanf("%d", &array[i]);

for(int i=0; i<size; i++)
  sum = sum + array[i];
printf("The summatio of array: %d\n",sum);

}