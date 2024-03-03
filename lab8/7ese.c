#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100
int main(int argc, char *argv[])
{
	int indice(char *s);

	char in[LEN];
   printf("Enter the name of input file ");
	scanf("%s",in);
	char * week[] = {"Monday", "Tuesday", "Wednesday","Thrusday","Friday","Saturday","Sunday"};
	printf("%s",week[indice(in)]);
}
int indice(char *s)
{
	for(int i = 0; *(s+i)!= '\0'; i++)
	{
		*(s+i) = tolower(*(s+i));
	}
	
	if(!strcmp(s,"lunedi"))
	{
		return 0;
	}
	else if(!strcmp(s,"martedi"))
	{
		return 1;
	}
	else if(!strcmp(s,"mercoledi"))
	{
		return 2;
	}
	else if(!strcmp(s,"giovedi"))
	{
		return 3;
	}
	else if(!strcmp(s,"venerdi"))
	{
		return 4;
	}
	else if(!strcmp(s,"sabato"))
	{
		return 5;
	}
	else if(!strcmp(s,"domanica"))
	{
		return 6;
	}
	else
	{
		printf("Error");
	}
	
	
}
