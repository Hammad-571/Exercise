#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
#define LEN 100
	
	char str[LEN];
	
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	char c;
	printf("Enter the charater to remove \t");
	scanf("%c",&c);
	char * str1 ;
	str1 = (char* )malloc(strlen(str)+1);
	void clean(char *s, char *t, char c);
	clean(str,str1,c);
	printf("Hi %s",str1);
}  
void clean(char *s, char *t, char c)
{
	char str[LEN];
	int i ,r;
	for(i=r= 0; *(s+i) != '\0';i++)
	{
		if(*(s+i) != c)
		{
			str[r] = *(s+i);
			r++;
		}
	}
	str[i] = '\0';
	t = str;
	printf("Enter the charater to remove %s",str);	
}
