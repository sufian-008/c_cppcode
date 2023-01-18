#include<stdio.h>
#include<stdbool.h>
int main(){
 int n;
 int answer=0;
 scanf("%d",&n);

 int score[n];
 for(int i=0; i<n;i++){
   scanf("%d",&score[i]);

 }
for(int i=0; i<n;i++){
    if(i==0) continue;
    bool isMax=true, isMin=true;

    for(int j=0; j<i; j++){
       if(score[j]<= score[i]){
        isMin = false;
       }
       if(score[j]>= score[i]){
        isMax = false;
        }
}
  if(isMax || isMin){
    answer++;
  }
 
}
printf("%d\n", answer);
}