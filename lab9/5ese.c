#include <stdio.h>
#include <stdlib.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
typedef struct
	{
	   Vett v1;
	   Vett v2;
	   Vett v3;
	} Tri;
int degenere(Tri t1);
int linind(Vett vet1,Vett vet2,Vett vet3);

#define LEN 10
int main()
{
        char str[LEN];
	Tri t1;
	Tri *ptr_tri;
	ptr_tri = &t1;
	printf("Enter the the vale of x of vet1");
	fgets(str,LEN,stdin);
	t1.v1.x = atof(str);
	fflush(stdin);
	
	printf("Enter the the vale of y of vet1");
	fgets(str,LEN,stdin);
	t1.v1.y = atof(str);
	fflush(stdin);
	
	printf("Enter the the vale of x of vet2");
	fgets(str,LEN,stdin);
	t1.v2.x = atof(str);
	fflush(stdin);
	
	printf("Enter the the vale of y of vet2");
	fgets(str,LEN,stdin);
	t1.v2.y = atof(str);
	fflush(stdin);
	
	printf("Enter the the vale of x of vet3");
	fgets(str,LEN,stdin);
	t1.v3.x = atof(str);
	fflush(stdin);
	
	printf("Enter the the vale of y of vet3");
	fgets(str,LEN,stdin);
	t1.v3.y = atof(str);
	
	if(linind(t1) == 1)
	{
		printf("Affinemente indipendenti");
	}
	else
	{
		printf("Affinemente dipendenti");
	}
}
int degenere(Tri t1)
{
	
	
	if((t1.v2.x - t1.v1.x)*(t1.v3.y - t1.v1.y) - (t1.v2.y - t1.v1*y)*(t1.v3.x - t1.v1.x) ==0 )
	{
		return 1;
	}else
	{
		return 0;
	}
	
}
