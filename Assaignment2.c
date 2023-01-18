#include<stdio.h>
#include<math.h>

int main(){
    
    double f_degree,l_degree,degree,c,c1,k,s_degree,t1,t2;
    
    printf("Input Initial degree: ");
     scanf("%lf",&f_degree);

     printf("Input Highest degree: ");
      scanf("%lf",&l_degree);
     
      printf("Input Seccond degree: ");
       scanf("%lf",&s_degree);

      printf("Input First time(Hour or Min): ");
       scanf("%lf",&t1);

       printf("Input User time(Houre or Min): ");
        scanf("%lf",&t2);

      c = l_degree - f_degree;
      
      c1 = s_degree-f_degree;
    
     
      k = log(c1/c)/t1;
     
      degree = f_degree + (c*exp(t2*k));

   printf("The final Degree is =%.2lf",degree);
     
     return 0;
    
}