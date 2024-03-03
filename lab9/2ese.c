#include <stdio.h>
#include <math.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
Vett somma(Vett vet1,Vett vet2);
Vett invadd(Vett vet1);
Vett sott(Vett vet1,Vett vet2);
Vett pscal(Vett vet1, double p);
double pint(Vett vet1,Vett vet2);

int main()
{
       
	Vett v1, v2;
	Vett r;
	printf("The x of v1 \n");
	scanf("%lf", &v1.x);
	
	printf("The y of v1 \n");
	scanf("%lf", &v1.y);
	printf("The x of v2 \n");
	scanf("%lf", &v2.x);
	printf("The y of v1 \n");
	scanf("%lf", &v2.y);
	r = somma(v1,v2);
	printf("%lf  %lf", r.x, r.y);
	r = invadd(v1);
	printf("%lf  %lf", r.x, r.y);
	r = invadd(v2);
	printf("%lf  %lf", r.x, r.y);
	r = sott(v1,v2);
	printf("%lf  %lf", r.x, r.y);
	double p;
	printf("The product is \n");
	scanf("%lf", &p);
	r = pscal(v1,p);
	printf("%lf  %lf", r.x, r.y);
	p = pint(v1,v2);
	printf("%lf", p);
}
Vett somma(Vett vet1,Vett vet2)
{
	Vett r;
	r.x = vet1.x + vet2.x;
	r.y = vet1.y + vet2.y;
	return r;
}
Vett invadd(Vett vet1)
{
	Vett r;
	r.x = -1 * vet1.x;
	r.y = -1 * vet1.y;
	return r;
}
Vett sott(Vett vet1,Vett vet2)
{
	Vett r;
	r.x = vet1.x - vet2.x;
	r.y = vet1.y - vet2.y;
	return r;
}
Vett pscal(Vett vet1, double p) 
{
	Vett r;
	r.x = vet1.x * p;
	r.y = vet1.y *p;
	return r;
}
double pint(Vett vet1,Vett vet2)
{
	double dp = vet1.x * vet2.x;
	return dp;
}
