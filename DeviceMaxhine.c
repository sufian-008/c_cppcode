#include<stdio.h>
int main(){
  int to[10];
  for(int i=0; i<10; i++){
    scanf("%d",&to[i]);
  }
  int current= 0;
  for(int i=0; i<3; i++){
    current = to[current];
   
  }
 printf("%d\n", current);
}