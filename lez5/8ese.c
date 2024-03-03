#include <stdio.h>
int main(void)
{
        int n ;
        printf("Enter the vale of n \n");
        scanf("%d",&n);
        int mat1 [n][n];
        int mat2 [n][n];
        int somma [n][n];
        for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("enter a number \n");
		    scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the 2 matrix \n");
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("enter a number \n");
		    scanf("%d",&mat2[i][j]);
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    somma[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("%d + %d = %d \t",mat1[i][j],mat2[i][j],somma[i][j]); 
		}
		printf("\n");
	}
	
}
