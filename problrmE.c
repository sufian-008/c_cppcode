#include<stdio.h>
#include<string.h>
int main(){

  char str1[100];
  char str2[100]="Hello,World!";
  scanf("%s",str1);
   int Value;
   Value=strcmp(str1,str2);  
  if(Value==0){
    printf("AC");
  }
  else{
    printf("WA");
  }

return 0;
}