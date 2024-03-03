#include <stdio.h>

int main()
{
	int n,k,i,r ;
	printf("Please enter a number N  ");
	scanf("%d", & n);
	printf("Please eanter a number K ");
	scanf("%d", &k);
	i = n;
	primi:
	if(n > 0 && k> 0)
	{
		if(i >= 1)
		{
		 r = r +k;
		 i--;
		 printf("i primi multipli sono %d \n",r);
        	 goto primi;
		}
	}
	else
	{
	 printf("The number are smaller than 0 \n");
	}
	return 0;
}
