#include <stdio.h>
#include <string.h>

int main(void)
{
#define LEN 100
	
	char str[LEN];
	char str1[LEN];
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	printf("the 2 string is ");
	fgets(str1,LEN,stdin);
	int lex(char *s, char *t);
	int strue;
	strue = lex (str,str1);
	printf("The s is bigger than t %d",strue);
}
int lex(char *s, char *t)
{
	for(int i = 0; *(s+i) != '\0';i++)
	{
		if(*(t+i) > *(s+i))
		{
			return 1;	
		}
		else if(*(t+i) < *(s+i))
		{
			return -1;
		}
	}
	return 0;
}
