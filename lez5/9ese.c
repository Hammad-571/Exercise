#include <stdio.h>
int main(void)
{
        int n ;
        double pi;
        printf("Enter the vale of n \n");
        scanf("%d",&n);
        int mat1 [n][n];
        double mul[n][n];
        for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("enter a number \n");
		    scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter the number you want to multiple with \n");
        scanf("%lf",&pi);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    mul[i][j] = pi*mat1[i][j];
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("%d * %lf = %lf \t",mat1[i][j],pi,mul[i][j]); 
		}
		printf("\n");
	}
	
}
