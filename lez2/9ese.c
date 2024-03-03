#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;
	int ris ;
	printf("Enter the charater \n");
	c = getchar();
	if(isalpha(c))
	{
	  if(isupper(c) == 0)
          {
		printf("Il carattere %c è minuscole", c);
                return 0;
          }
          else
          {
                printf("Il carattere %c è maiuscola", c);
                return 0;
          }
	  printf("The character is a digits");
	}
	else
	{
	  printf("The character isn't a cha");
	}
}
