#include <stdio.h>
#include <stdlib.h>
int main()
{
       void bubble(double * po,int n);
       void enter(double * po,int n);
       void print(double * po,int n);
       int n,ch,vero;
   
       printf("enter the number of elements");
       scanf("%d",&n);
       double *pt; 
       pt = malloc (n*sizeof(double));  
      
     do{ 
       printf("1. Inserisci elenco di double. \n2. Ordina elenco.\n3. Visualizza elenco.\n4. Termina. \n");
       scanf("%d",&ch);
       
       switch(ch)
       {
       	case 1:
		if(vero == 1)
		{
		  free(pt);
		  enter(pt,n);
		}
		else
		{
		   enter(pt,n);
		   vero = 1;
		}
		break;
	case 2:
		if(vero == 1)
			bubble(pt,n);
		break;
	case 3:
		if(vero == 1)
		   	print(pt,n);
		break;
	case 4:
		printf("terminated");
		break;
	default:
			printf("1. Inserisci elenco di double. \n2. Ordina elenco.\n3. Visualizza elenco.\n4. Termina. \n");
       			scanf("%d",&ch);
       			break;
		
       }
     }while(ch != 4);
}
void enter(double * po,int n)
{
       for ( int i=0; i<n; i++ )
       {
       	  printf("enter the vale");
       	  scanf("%lf",(po+i));
       }
}
void bubble(double * po,int n)
{
	double temp;
	int scambio = 0;
	while (scambio==0)
	{
	  scambio = 1;
	  for (int i=0; i<=n-2; i++ )
	  {
	     if ( *(po+i)> *(po+i+1) )
	     {
		temp = *(po+i);
		*(po+i) = *(po+i+1);
		*(po+i+1) = temp;
  		scambio=0;
  	     }
  	  }
  	}
}
void print(double * po,int n)
{
	for (int i=0; i<n; i++ )
       {
       	  printf("The vale is %lf \n", *(po+i));
       }
}
