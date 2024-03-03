#include <stdio.h>
#include <stdlib.h>
int main()
{
       void bubble(double * po,int n);
       int n ;
       printf("enter the number of elements");
       scanf("%d",&n);
       double *pt; 
       pt = malloc (n*sizeof(double));  
       for ( int i=0; i<n; i++ )
       {
       	  printf("enter the vale");
       	  scanf("%lf",(pt+i));
       }
       for (int i=0; i<n; i++ )
       {
       	  printf("The vale is %lf \n", *(pt+i));
       }
       bubble(pt,n);
       for (int i=0; i<n; i++ )
       {
       	  printf("The vale is %lf \n", *(pt+i));
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
