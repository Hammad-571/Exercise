#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
double area(Tri t1);
double dist(Vett vet1, Vett vet2);
#define LEN 10
int main()
{
        char str[LEN];
	Tri t1;
	
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
	
	double area1 = area(t1);
	printf("%lf", area1);
}
double dist(Vett vet1, Vett vet2)
{
	double distance = sqrt(((vet1.x - vet2.x)*(vet1.x - vet2.x))+((vet1.y - vet2.y)*(vet1.y - vet2.y)));
	return distance;
}
double area(Tri t1)
{
	double a = dist(t1.v1 , t1.v2);
	double b = dist(t1.v2 , t1.v3);
	double c = dist(t1.v1 , t1.v3);
	double p = a + b+ c;
	double ar = sqrt(p*(p-a)*(p-b)*(p-c));
	return ar;
}
