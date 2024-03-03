#include <stdio.h>
#include <ctype.h>
int main() {
#define LEN 100
    char str[LEN];
    int total = 0;
    while(str[0] != '\0')
    {
    	printf("enter the character  ");
        fgets(str,LEN,stdin);
        
        for(int i = 0; i < LEN; i++)
	{
	  if(str[i] != '\0')
	  {
	  	total++;
	  }
	  else
	  {
	  	i = LEN;
	  }
	}
        if(str[0] != '\n')
        {
        	printf("the string is %s", str);
        }
        else
        {
        	printf("The total character are %d",total);
        }
    		
    }
    return 0;
}
