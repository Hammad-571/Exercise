#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	void reverse(char *s, char *t);
	char str[LEN];
	fgets(str,LEN,stdin);
	char *inverse ;
	
	reverse(str, inverse);
	
}
void reverse(char *s, char *t)
{
	char str[LEN];
	char strIn[LEN] ;
	int i;
	for(i = 0;*(s+i) != '\0' ;i++)
	{
		str[i] =*(s+i) ;
	}
	str[i++] = '\0'; 
	printf("the string is %s", str);
	
	for(i = 0; i < strlen(str) ;i++)
	{
		strIn[i] = str[strlen(str)-1-i];
	}
	printf("the string inverse is %s", strIn);
}
