#include<stdio.h>
#include<math.h>
int main()
{
    float s1,h1=1,h2,s2,p,t,x,B,m;

     printf("Input first starnd bacteria: ");
	 scanf("%f",&s1);

	 printf("Input seccond strands bacteria:  ");
	 scanf("%f",&s2);

	 printf("Input first Hour: ");
	 scanf("%f",&h1);

	 printf("Input second Hour: ");
	 scanf("%f",&h2);


    p = h2-h1;
	B=s2/s1;
     if(p==2)
	  m= sqrt(B);
	  else if(p==3)
         m=cbrt(B);
	   else if(p==4)
	   m=pow(B,(0.25));
     else if(p==5)
      m=pow(B,(0.2));
     else if(p==6)
		 m=pow(B,(0.16));
     else if(p==7)
		 m=pow(B,(0.14));
     else if(p==8)
		 m=pow(B,(0.125));
     else if(p==9)
		 m=pow(B,(0.11));
     else if(p==10)
		 m=pow(B,(0.1));
     else if(p==11)
		 m=pow(B,(0.09));
     else if(p==12)
		 m=pow(B,(0.08));
     else if(p==13)
		 m=pow(B,(0.076));
     else 
		 m=pow(B,(0.071));


	 x = s1*pow(m,(t-1));
    
   
    printf("The approximate number of strands of the bacteria originally in the culture: %.1f",x);
    return 0;
}