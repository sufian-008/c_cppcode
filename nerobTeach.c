#include<stdio.h>

int main(){
      
      int size,i,j,p,nV;

      printf("Enter array size: ");
        scanf("%d",&size);
        int LA[size];
           

        printf("Input Array elements: ");   
        for(i=0;i<size;i++){
            scanf("%d",&LA[i]);
        }

        for(i=0;i<size;i++){
            j=size;
           
        }
         printf("Enter position: ");
              scanf("%d",&p);
              printf("Insert Value: ");
                scanf("%d",&nV);

         for(j=size;j>=p;j--){
            LA[j+1]=LA[j];
         }     
          LA[p]=nV;
         size = size+1;
         for(i=0;i<size;i++){
            printf("%d ",LA[i]);
         }
    

}