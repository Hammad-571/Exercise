/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
  char **f;
  int n;
} testo;
int
main ()
{
  char *p[] = { "Bobarchio\n", "Potarchio\n", "Mariangiongiangela\n" };
  testo t;
  t.n = 3;
  t.f = p;
  int carica (char *nf, testo * txt);
  testo *t1;
  t1 = &t;
  char str[] = "lorem.txt";
  //carica(str,t1);
  void mostra (testo t);
  //mostra(t);
  int aggiungi (testo * txt, char *s);
  aggiungi (t1, str);
  //mostra(t);
}

int aggiungi (testo * txt, char *s)
{
  txt->n++;
  char **d = (char **) malloc (txt->n);
  for (int i = 0;i<txt->n-1;i++)
    {
      d[i] = (char *) malloc (100);
      strcpy (d[i], *(txt->f + i ));
      printf("%s",d[i]);
    }
    d[txt->n] = (char *) malloc (100);
   strcpy (d[txt->n], s);
   printf("%s",d[txt->n]);
   
}


void
mostra (testo t)
{
  for (int i = 0; i < t.n; i++)
    {
      printf ("%s", *(t.f + i));
    }
}

int
carica (char *nf, testo * txt)
{
  int n;
  FILE *fp;
  fp = fopen (nf, "r");
  if (fp == NULL)
    {
      printf ("Could not open file.");
      return -1;
    }
  fscanf (fp, "%d", &n);	//un array di char ausilliare 
  if (n < 0)
    {
      return -2;
    }
  char *str_array[n];
  char array_i[100];		//un malloc per ogni righa
  for (int i = 0; i < n; i++)
    {
      fscanf (fp, "%s", array_i);
      int t = strlen (array_i);
      str_array[i] = (char *) malloc (strlen (array_i) * sizeof (char));
      if (str_array[i] == NULL)
	{
	  return -3;
	}
      strcpy (str_array[i], array_i);
      if (strlen ((str_array[i])) == 0)
	{
	  return -4;
	}
      printf ("%s\n", *(str_array + i));
    }
}
