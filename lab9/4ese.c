#include <stdio.h>
#include <stdlib.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
int linind(Vett vet1,Vett vet2,Vett vet3);

#define LEN 10
int main()
{
        char str[LEN];
	Vett v1, v2,v3;
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
	
	rintf("Enter the the vale of x of vet3");
	fgets(str,LEN,stdin);
	v3.x = atof(str);
	fflush(stdin);
	printf("Enter the the vale of y of vet3");
	fgets(str,LEN,stdin);
	v3.y = atof(str);
	fflush(stdin);
	
	if(linind(v1,v2,v3) == 1)
	{
		printf("Affinemente indipendenti");
	}
	else
	{
		printf("Affinemente dipendenti");
	}
}
int linind(Vett vet1,Vett vet2,Vett vet2)
{
	
	
	if((vet2.x - vet1.x)*(vet3.y - vet1.y) - (vet2.y - vet1*y)*(vet3.x - vet1.x) ==0 )
	{
		return 1;
	}else
	{
		return 0;
	}
	
}
