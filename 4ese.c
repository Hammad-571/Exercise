#include <stdio.h>
int main()
{
        int n,k,r;
        printf("Please enter a number N  ");
        scanf("%d", & n);
        k = 0;
	r = 0;
	while(r < n)
	{
	 k++;
	 r = r +k;
	}
        printf("k e %d ", --k);

}
