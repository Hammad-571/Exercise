#include <stdio.h>
#include <math.h> //Intestazione necessaria per double sqrt(double)

int main(void)
{
        int a,b, aux;
        double delta;

        printf("Inserisci un numero reale non negativo a: ");
        scanf("%d",&a);
        printf("Inserisci un numero reale non negativo b: ");
        scanf("%d",&b);
	
	while(b !=0 )
	{
		aux = b;
		b = a % b;
		a = aux;
	}
	printf("The m.c.d. is %d", a);
}
