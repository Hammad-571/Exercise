#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	int len(char *s);
	char str[LEN];
	
	fgets(str,LEN,stdin);
	char *string = str;
	
	int length = len(string);
	printf("%d",length-1);
}
int len(char *s)
{
	char str[LEN];
	int i;
	for(i = 0;*(s+i) != '\0' ;i++)
	{
		str[i] =*(s+i) ;
	}
	if(i == 0)
	{
		return 0;
	}
	else
	{
		str[i] = '\0'; 
	}
	return strlen(str);
}
