#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 100
int main(int argc, char *argv[])
{
	void ordina(char **s, int len);

	char * str[5] ;
	char str1[LEN];
	
	for(int i = 0; i< 5; i++)
	{
		
		printf("Enter the string \n");
		char *copy = (char *)malloc(LEN + 1);
		scanf("%s",copy);
		//strcpy(str[0],"hello");
		str[i] = copy;
		
	}
	
	ordina(str,5);
	printf("%s \n", str[0]);
	printf("%s \n", str[1]);
	printf("%s \n", str[2]);
	printf("%s \n", str[3]);
	printf("%s \n", str[4]);
}
void ordina(char **s, int len)
{
	char *temp = (char *)malloc(LEN + 1);
	int scambio = 0;
	while (scambio==0)
	{
	  scambio = 1;
	  for (int i=0; i<=len-2; i++ )
	  {
	     if ( strlen(s[i]) > strlen(s[i+1]) )
	     {
			temp = s[i];
			s[i] = s[i+1];
			s[i+1] = temp;
  			scambio=0;
  	     }
  	  }
  	}
}
