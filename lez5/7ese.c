#include <stdio.h>
int main(void)
{
        int n ;
        printf("Enter the vale of n \n");
        scanf("%d",&n);
        int matrice [n][n];
        int matriceT [n][n];
        for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("enter a number \n");
		    scanf("%d",&matrice[i][j]);
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    printf("the matrice is %d \t", matrice[i][j]);
		}
		printf("\n");
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
		    //matriceT[j][i] = matrice[i][j];
		    printf("the matrice is %d \t", matrice[j][i]);
		}
		printf("\n");
	}
}
