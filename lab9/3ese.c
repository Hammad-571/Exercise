#include <stdio.h>
#include <stdlib.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
int linind(Vett vet1,Vett vet2);

#define LEN 10
int main()
{
        char str[LEN];
	Vett v1, v2;
	printf("Enter the the vale of x of vet1");
	fgets(str,LEN,stdin);
	v1.x = atof(str);
	fflush(stdin);
	printf("Enter the the vale of y of vet1");
	fgets(str,LEN,stdin);
	v1.y = atof(str);
	fflush(stdin);
	printf("Enter the the vale of x of vet2");
	fgets(str,LEN,stdin);
	v2.x = atof(str);
	fflush(stdin);
	printf("Enter the the vale of y of vet2");
	fgets(str,LEN,stdin);
	v2.x = atof(str);
	
	if(linind(v1,v2) == 1)
	{
		printf("Linearmente indipendenti");
	}
	else
	{
		printf("Linearmente dipendenti");
	}
}
int linind(Vett vet1,Vett vet2)
{
	if((vet1.x * vet2.y) - (vet1.y * vet2.x) ==0 )
	{
		return 1;
	}else
	{
		return 0;
	}
	
}
