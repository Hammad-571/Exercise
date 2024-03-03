#include <stdio.h>
#include <ctype.h>
int main() {
#define LEN 100
    char str[LEN];
    int total = 0;
    int count = 0;
    printf("enter the character  ");
    fgets(str,LEN,stdin);
    while(str[0] != '\n')
    {
        
        for(int i = 0; i < LEN; i++)
	{
	  if(str[i] != '\0')
	  {
	  	total++;
	  }
	  else
	  {
	  	i = LEN;
	  	count++;
	  }
	}
        if(str[0] != '\n')
        {
        	printf("the string is %s", str);
        }

        printf("enter the character  ");
        fgets(str,LEN,stdin);
    }
    printf("The total character are %d \n",total);
    printf("The total character are %d",total/count);
    return 0;
}
