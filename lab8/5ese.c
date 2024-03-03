#include <stdio.h>
#include <string.h>
#define LEN 100
int main(int argc, char *argv[])
{
	void reverse(char *s);

	
	reverse(argv[1]);
}
void reverse(char *s)
{
	char str[LEN];
	char strIn[LEN] ;
	int i;
	for(i = 0;*(s+i) != '\0' ;i++)
	{
		str[i] =*(s+i) ;
	}
	str[i++] = '\0'; 
	printf("the string is %s\n", str);
	
	for(i = 0; i < strlen(str) ;i++)
	{
		strIn[i] = str[strlen(str)-1-i];
	}
	printf("the string inverse is %s\n", strIn);
	return ;
}

