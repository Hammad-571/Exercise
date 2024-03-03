#include <stdio.h>
#include <time.h>
int main(void)
{
	int n = 3;
	void nega(char ch[][n],int n, int i, int j);
	void print(char ch[][n],int n);
	void rif(char ch[][n], int n);
	void speculare(char ch[][n],char spec[][n],int n);
	void shift(char ch[][3], int n);
	srand(time(NULL));

   char mat [3][3];
   char spec [3][3];
   for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			int x = rand()%10;
			if(x%2 == 0)
			{
				mat[i][t] = '+';
			}
			else
			{
				mat[i][t] = '-';
			}
		}
	}
	
	for(int i =0; i < n; i++)
	{
		for(int t =0; t < n; t++)
		{
			int x = rand()%10;
			if(x%2 == 0)
			{
				spec[i][t] = '+';
			}
			else
			{
				spec[i][t] = '-';
			}
		}
	}
	
	int choice ;
  do
  {
	  printf("1. Mostra matrice\n2. Shift\n3. Riflessione\n4. Negazione\n5. Controlla se speculare\n6. Esci\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			print(mat,n); 	break;
		case 2:
			shift(mat,n);	break;
		case 3:
			rif(mat,n);		break;
		case 4:
			int i,j;
			printf("Enter the value of i");
			scanf("%d",&i);
			printf("Enter the value of j");
			scanf("%d",&j);
			nega(mat,n,i,j);
			break;
		case 5:
			speculare(mat,spec,n);
			break;
		case 6:
			printf("Exit\n");	 break;
		default:
			printf("1. Mostra matrice\n2. Shift\n3. Riflessione\n4. Negazione\n5. Controlla se speculare\n6. Esci\n");
	scanf("%d",&choice);
	}
  }while(choice!= 6);

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
		printf("no \n");
	}
	else
	{
		printf("yes \n");
	}
}
void shift(char ch[][3], int n)
{
	char temp1 ;
	char temp[3][3];
	
	for(int i =0; i < n; i++)
	{
		temp1 = *(*(ch+i)+0);
		*(*(ch+i)+0) = *(*(ch+i)+2);
		*(*(ch+i)+2) = *(*(ch+i)+1);
		*(*(ch+i)+1) = temp1;
	}
	
	for(int i =0; i < 3; i++)
	{
		for(int t =0; t < 3; t++)
		{
			printf("%c",*(*(ch+i)+t));
		}
		printf("\n");
	}
	
}
