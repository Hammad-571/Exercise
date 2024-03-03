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
