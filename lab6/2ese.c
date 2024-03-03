#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	int equals(char *s, char *t);
	char str[LEN];
	char str1[LEN] ; 
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	printf("the 2 string is ");
	fgets(str1,LEN,stdin);
	int eq;
	eq = equals(str, str1);
	
	printf("the int is %d", eq);
}
int equals(char *s, char *t)
{
	for(int i = 0; *(s+i) != '\0';i++)
	{
		if(*(t+i) != *(s+i))
		{
			return 1;	
		}
	}
	return 0;
	
}
