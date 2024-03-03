#include <stdio.h>
#include <math.h> //Intestazione necessaria per double sqrt(double)

int main(void)
{
	double a,b,c;
	double delta;
	do
	{
	    printf("Inserisci un numero reale non negativo a: ");
	    scanf("%lf",&a);
	} while (a<0);
	printf("Inserisci un numero reale non negativo b: ");
        scanf("%lf",&b);
	printf("Inserisci un numero reale non negativo c: ");
        scanf("%lf",&c);

	delta = b*b -4*a*c;
	if(delta < 0)
	{
	   printf("non esiste soluzioni reali");
	}
	else if(delta == 0)
	{
	   printf("Esiste solo una soluzione %lf", (-b/(2*a)));
	}
	else
	{
	   printf("Esiste due soluzioni %lf e %lf",((-b+sqrt(delta))/(2*a)),((-b-sqrt(delta))/(2*a)));
	}
}
