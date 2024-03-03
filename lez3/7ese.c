#include <stdio.h>
#include <math.h> //Intestazione necessaria per double sqrt(double)

int main(void)
{
        int a,b, aux;
        int i = 0;

        printf("Inserisci un numero reale non negativo a: ");
        scanf("%d",&a);
        printf("Inserisci un numero reale non negativo b: ");
        scanf("%d",&b);
        if(a > 0 && b> 0)
        {
           while(b !=0 )
           {
		i++;
                aux = b;
                b = a % b;
                a = aux;
           }
           printf("The m.c.d. is %d \n", a);
	   printf("The of attemps taken are %d \n", i);
        }
        else
        {
           printf("Error a and b must be bigger than 0");
           return -1;
        }
}
