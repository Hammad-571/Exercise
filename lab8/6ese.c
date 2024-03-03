#include <stdio.h>
#include <string.h>
#define LEN 100
int main(int argc, char *argv[])
{
	void clean(char *s, char *u);
	
	clean(argv[1],argv[2]);
}
void clean(char *s, char *u)
{
	char str[LEN];
	int i ,r,x;
	for(x=0 ; *(u+x) != '\0'; x++)
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
	str[i] = '\0';
	//t = str;
	printf("the string without space is is %s",str);
}
