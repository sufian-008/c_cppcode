#include<stdio.h>

int main()
{
    int N, i, J, k,f;
    printf("Enter array Size: ");
    scanf("%d",&N);
    int LA[N];

    for(i=0; i<N; i++)
      scanf("%d",&LA[i]);

    for(i=0; i<N; i++)
      J = N;
       printf("Enter the position: ");
      scanf("%d",&k);
    for(J=k; J>=N; J++)
    {
         LA[J] = LA[J+1];
         

    }
    N=N-1;
   
    for(i=0; i<N; i++)
       printf("%d ",LA[i]);

}
