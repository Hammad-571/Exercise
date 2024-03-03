#include <stdio.h>
#include <ctype.h>

int main() {
#define LEN 100
    char str[LEN];
    printf("enter the character  ");
    scanf("%s",str);
    for(int i = 0; i < LEN; i++)
	{
	  if(str[i] == '\0')
	  {
	     if(str[i-1] == 'a' || str[i-1] == 'e')
	     {
	     	printf("Hey beautiful");
	     	return 0;
	     }
	     else if(str[i-1] == 'o' || str[i-1] == 'i')
	     {
	     	printf("you are gay");
	     	return 0;
	     }
	     else
	     {
	     	printf("fuck you");
	     	return 0;
	     }
	  }
	  
	}

}
