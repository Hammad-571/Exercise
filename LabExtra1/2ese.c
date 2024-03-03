#include <stdlib.h>
#include <stdio.h>

typedef struct {
	double x;
	double y;
}Punto;

typedef struct {
	Punto ** seq;
	int n;
}Poligono;
int main()
{
	int leggiPunto(Punto *);
	void inizializzaPoligono(Poligono *);
	void stampaPoligono(Poligono * pl);
	
	Poligono pol;
	Poligono * pl;	
	pl = &pol;
		
	printf("Quanti punti vuoi inserire: ");
	scanf("%d",&pl->n);
	int n = pl->n;
	pl->seq = (Punto **)malloc(n*sizeof(Punto));
	Punto p[n];
	Punto * pt[n];
	for(int i = 0; i <n; i++)
	{
		pt[i] = &p[i];
		leggiPunto(pt[i]);
		pl->seq[i] = pt[i];
	}
	stampaPoligono(pl);
}

int leggiPunto(Punto * pt)
{
	
	printf("Inserisci la x: ");
	scanf("%lf", &pt->x);
	printf("Inserisci la y: ");
	scanf("%lf", &pt->y);
	return 0;
	
}

void inizializzaPoligono(Poligono * pl)
{
		pl->seq = NULL;
		pl->n = 0;
}

void stampaPoligono(Poligono * pl)
{
	int n = pl->n;
	for(int i = 0; i < n ; i++)
	{
		printf("x: %lf  y: %lf\n",pl->seq[i]->x,pl->seq[i]->y);
	}		
}

