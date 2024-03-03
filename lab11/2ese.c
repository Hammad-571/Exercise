#include <stdio.h>
#include <stdlib.h>
typedef struct
	{
	   char ** f;
	   int n;
	} testo;
int main()
{
	char *p[]={"Bobarchio\n", "Potarchio\n", "Mariangiongiangela\n"};
	testo t;
	t.n = 3;
	t.f = p;
	int carica(char *nf, testo *txt);
	testo *t1;
	*t1= t;
	char str[100] = "lorem.txt";
	carica(str,t1);
	void mostra(testo t);
	mostra(t);
}
void mostra(testo t)
{
	for(int i = 0; i < t.n ; i++)
	{
		printf("%s",*(t.f+i));
	}
}
int carica(char *nf, testo *txt)
{
	FILE* fp ;
	printf("%s",nf);
   fp = fopen(nf, "r");
   if (fp == NULL)
  	{
    	printf("Could not open file.");
    	return 1;
  	}
}
