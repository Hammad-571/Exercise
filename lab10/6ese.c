#include <stdio.h>
int main(void)
{
	void nega(char ch[][n],int n, int i, int j);
	void print(char ch[][n],int n);
	void rif(char ch[][n], int n);
	void speculare(char ch[][n],char spec[][n],int n);
	int n = 3;
	char mat [3][3] = { {'-','+','-'},{'-','+','+'},{'-','+','+'}};
	char spec [3][3] = { {'+','+','-'},{'+','+','+'},{'-','-','-'}};
	/*for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			printf("%c",mat[i][t]);
		}
		printf("\n");
	}
	*/
	int choice ;
	printf("1. Mostra matrice\n2. Shift\n3. Riflessione\n4. Negazione\n5. Controlla se speculare\n6. Esci");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			print(mat,n);
		case 2:
			
	}
	rif(mat,n);
	nega(mat,3,0,1);
	speculare(mat,spec,n);
}
void print(char ch[][3],int n)
{
	for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			printf("%c",*(*(ch+i)+t));
		}
		printf("\n");
	}
}
void rif(char ch[][3], int n)
{
	for(int i =2; i >= 0; i--)
	{
		for(int t =2; t >=0; t--)
		{
			printf("%c",*(*(ch+t)+i));
		}
		printf("\n");
	}
	
}

void nega(char ch[][3],int n, int r, int j)
{
	for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			if(i == r && t ==j)
			{
				if(*(*(ch+i)+t) == '+')
				{
					printf("-");
				}
				else
				{
					printf("+");
				}
			}
			else
			{
				printf("%c",*(*(ch+i)+t));
			}
		}
		printf("\n");
	}
}
void speculare(char ch[][3],char spec[][3],int n)
{
	int specInt = 0;
	int r = 0;
	for(int i =2; i >= 0; i--)
	{
		int s = 0;
		for(int t =2; t >=0; t--)
		{
			if(*(*(ch+t)+i) != *(*(spec+r)+s))
			{
				specInt = 1;
			}
			s++;
		}
		r++;
		printf("\n");
	}
	if(specInt == 1)
	{
		printf("NO");
	}
	else
	{
		printf("Yes");
	}
	/*for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			printf("%c",*(*(ch+i)+t));
		}
		printf("\n");
	}*/
}
