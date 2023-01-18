#include <stdio.h>


int main()
{
	char str[100]={0};	
	int i;

	printf("Enter a string: ");
	scanf("%s",&str); 

	for(i=0; str[i]!='\0'; i++)
	{
		
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
		}
	}
	printf("%s\n",str);
	return 0;
}