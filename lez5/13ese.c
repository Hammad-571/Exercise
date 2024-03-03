#include <stdio.h>
int main(void)
{
   int n ;
   printf("Enter the vale of n \n");
   scanf("%d",&n);
   int A [n][n];
   int result [n][n];
   int m;
   do{
   	printf("Enter the vale of m \n");
   	scanf("%d",&m);	
   }while(m < 1);
      for (int i=0; i<n; i++)
	{
	    for (int j=0; j<n; j++)
	    {
    		printf("enter a number \n");
    		scanf("%d",&A[i][j]);
	    } 
	}
	for (int i=0; i<n; i++)
	{
	    for (int j=0; j<n; j++)
	    {
    		result[i][j] = 1;
	    } 
	}	
      for (int i=0; i<m; i++)
      {
	for (int i=0; i<n; i++)
	{
	    for (int j=0; j<n; j++)
	    {
   		result[i][j] = result[i][j] * A[i][j];
	    } 
	}
      }
      
      for (int i=0; i<n; i++)
	{
	    for (int j=0; j<n; j++)
	    {
   		printf("%d \t",result[i][j]);
	    } 
	    printf("\n");
	}
      
}
