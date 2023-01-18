#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int m;
    scanf("%d %d", &n, &m);  

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);    
    }

    for (int i = 0; i < n; i++){
    
        printf("%d ", A[(i + m) % n]);    
    }
   
    
    return 0;
}

