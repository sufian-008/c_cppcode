
  
#include<stdio.h>
int main()
{
    char a[10]={'e','c','d','f','k','m','l','n','r','q'};
  

    int i,x,n=10;
    x='c';
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}

 
       