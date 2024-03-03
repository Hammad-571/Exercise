#include <stdio.h>
#include <string.h>
int main(void)
{
#define LEN 100
	int bell(int n);
	int n;
	printf("nsdjnfisdn");
	scanf("%d",&n);
	
	for(int i = 0; i <= r; i++)
	{
		for(int j = 0; j <= s; j++)
		{
			printf("%d \n",D(i,j));
		}
	}
	
}
int D(int m ,int n)
{
	if(n == 0 || m == 0)
	{
		return 1;
	}
	else
	{
		return D(m-1,n)+D(m,n-1)+D(m-1,n-1);
	}	
}
