#include <stdio.h>
#include <ctype.h>

int main() {
#define LEN 100
    char str[LEN];
    int total= 0 ;
    printf("enter the character  ");
    fgets(str,LEN,stdin);
    printf("%s",str);
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
    printf("the total is %d",total);

}
