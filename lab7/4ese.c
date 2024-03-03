#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	int c(int n);
	int r;
	printf("nsdjnfisdn");
	scanf("%d",&r);
	for(int i = 0; i <= r; i++)
	{
		printf("%d \n",c(r-i));
	}
}
int c(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return (2*(2*n-1)*c(n-1))/(n+1);
	}
		
}
