#include <stdio.h>
int main(void)
{
	char mat [3][3] = { {'+','-','+'},{'+','-','+'},{'+','-','+'}};
	for(int i =0; i < 3; i++)
	{
		for(int t =0; t < 3; t++)
		{
			printf("%c",mat[i][t]);
		}
		printf("\n");
	}
	void shift(char ch[][3], int n);
	shift(mat,3);
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
