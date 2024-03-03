#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	int occ(char *s, char c);
	char str[LEN];
	char ch;
	fgets(str,LEN,stdin);
	scanf("%c",&ch);
	//char *string = str;
	
	int length = occ(str,ch);
	printf("%d",length-1);
}
int occ(char *s, char c)
{
	if(s[0] = c)
	{
		return 1+occ(s+1,c);
	}
	else if(*(s+0) = '\0')
	{
		return 0;
	}
	else
	{
		return 0+occ(s+1,c);
	}
		
}
