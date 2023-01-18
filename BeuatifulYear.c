#include<stdio.h>
#include<stdbool.h>
int main(){
 int year;
 scanf("%d", &year);

  for( int y = year+1;;y++){
    int curYear=y;

    int fr[10]={0};
    bool repeat= false;
      while (curYear>0)
      {
        int d = curYear%10;
        curYear/=10;
        fr[d]++;

        if(fr[d]>=2){
           repeat = true;
        }
      }
      if(!repeat){
        printf("%d\n", y);
        break;
      }

  }


}