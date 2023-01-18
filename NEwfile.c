#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = {"nerob"};
    int i =0;
    int h = strlen(str) -1;

    while (h>1){
if (str[1++]!=str[h--])
printf("%s is not a palindrom\n",str);
return 0;
    }
    
    
    
}