#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	char str[LEN];
	char str2[LEN];
	char str1[LEN];
	printf("the 1 string is ");
	fgets(str,LEN,stdin);
	
	printf("the 1 string is ");
	fgets(str1,LEN,stdin);
	
	void clean(char *s, char *t, char *u);
	clean(str,str2,str1);
}
void clean(char *s, char *t, char *u)
{
	char str[LEN];
	int i ,r,x;
	for(x=0 ; *(u+x) != '\n'; x++)
	{
	   for(i=r= 0; *(s+i) != '\0';i++)
	   {
		if(*(s+i) != *(u+x))
		{
			str[r] = *(s+i);
			r++;
		}
	   }
	   str[r] = '\0';
	   s = str;
	}
	printf("Enter the charater to remove %s",str);	
}
