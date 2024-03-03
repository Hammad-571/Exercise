#include <stdio.h>
#include <math.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
double dist(Vett vet1, Vett vet2);
int main()
{
       
	Vett v1, v2;
	
	printf("The x of v1 \n");
	scanf("%lf", &v1.x);
	
	printf("The y of v1 \n");
	scanf("%lf", &v1.y);
	printf("The x of v2 \n");
	scanf("%lf", &v2.x);
	printf("The y of v1 \n");
	scanf("%lf", &v2.y);
	
	double d = dist(v1,v2);
	printf("%lf", d);
}
double dist(Vett vet1, Vett vet2)
{
	double distance = sqrt(((vet1.x - vet2.x)*(vet1.x - vet2.x))+((vet1.y - vet2.y)*(vet1.y - vet2.y)));
	return distance;
}
