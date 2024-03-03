#include <stdio.h>
#include <string.h>

int main(void)
{
#define LEN 100
	
	char str[LEN];
	char str1[LEN];
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	
	void clean(char *s, char *t);
	clean(str,str1);
}
void clean(char *s, char *t)
{
	char str[LEN];
	int i ;
	for(i= 0; *(s+i) != '\0';i++)
	{
		if(*(s+i) != ' ')
		{
			str[i] = *(s+i);
		}
	}
	str[i] = '\0';
	t = str;
	printf("the string without space is is %s",str);
}
