#include <stdio.h>
int main()
{
        int n,d,q,r;
        printf("Please enter a number N  \n");
        scanf("%d", & n);
	printf("Please enter a number D  \n");
        scanf("%d", & d);

        q = 0;
        r = 0;
        while(n >= d)
        {
         q++;
         n = n-d;
        }
	r= n;
        printf("Quoziente è uguale a -%d \n", q);
	printf("Resto è uguale a %d \n", r);
}
