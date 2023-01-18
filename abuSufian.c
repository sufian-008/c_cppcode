#include <stdio.h>
#define NUM_RATES (sizeof(value)/sizeof(value[0]))    
                                                   
#define INITIAL_BALANCE 100.00

void interestfunction(int low_rate,int num_years)
{ 
int year;
float array[low_rate][num_years];
printf("\nYears");               

    for (int i = 0; i < NUM_RATES; i++) {    
                
    printf("%9d", low_rate + i);         
                                            
    array[i][] = INITIAL_BALANCE;
}
              
    for (year = 1; year <= num_years; year++) {
        printf("    %d  ", year);        
        for (int i = 0 ;  i < NUM_RATES ; i++) {
            array[i] = array[i] + ( ((low_rate + i) / 100.0)  *  array[i]);
            printf("   %.2f", array[i]);
        }
            printf("\n");             
    }

}


int main()
{
int low_rate;                  
int num_years;                    
      
printf("Enter interest rate: ");
scanf("%d", &low_rate);
printf("Enter number of years: ");
scanf("%d", &num_years);

interestfunction(low_rate, num_years);

    return 0;

}