#include <stdio.h>
#include <ctype.h>
int main(void)
{
        char c;
	char enter = '\n';
	do
	{
		printf("Enter the charater \n");
                c = getchar();
        	if(isalpha(c) && c != enter)
        	{
          	    if(isupper(c) == 0)
          	    {
                	printf("Il carattere %c è minuscole \n", c);
          	    }
          	    else
          	    {
                	printf("Il carattere %c è maiuscola \n", c);
          	    }
        	}
        	else
        	{
          		printf("The character isn't an alphabet \n");
        	}
		getchar();
	}while(c != enter);

	return 0;
}
