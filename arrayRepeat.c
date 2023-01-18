#include<stdio.h>
int main(){
 int array[100],size;
printf("Enter array size: ");
scanf("%d",&size);

printf("Enter array Elements: ");
for(int i =0; i<size; i++){
    scanf("%d",&array[i]);
}
int max=array[0];
int count=0;

    for(int i = 0; i<size; i++){
    if(array[i] > max){
      max = array[i];
       count++;
    }
  
}

printf("Repeated numbers: %d\n",max);
printf("Maximum occurs: %d",count);

}