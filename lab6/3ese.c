#include <stdio.h>
#include <string.h>
void reverse(char *s, char *t);
int equals(char *s, char *t);
int main(void)
{
#define LEN 100
	
	char str[LEN];
	char str1[LEN];
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	char *inverse ;
	int eq = 1 ;
	reverse(str, str1);

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
		strIn[i] = str[strlen(str)-2-i];
	}
	strIn[++i] = '\n';
	strIn[++i] = '\0';
	printf("the string inverse is %s", strIn);
	int eq = 0;
	eq = equals(str, strIn);
	printf("The eq is %d",eq);
}

int equals(char *s, char *t)
{
	for(int i = 0; *(s+i) != '\n';i++)
	{
		if(*(t+i) != *(s+i))
		{
			return 1;	
		}
	}
	return 0;
	
}
