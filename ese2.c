#include <stdio.h>
int main()
{
        int n,k,i,r ;
        printf("Please enter a number N  ");
        scanf("%d", & n);
        printf("Please eanter a number K ");
        scanf("%d", &k);
        r = n;
        div:
	 if(r == 0 )
		{
                 printf("Si, è divisibile per K \n");
		return 0;
                }
         if(r < k)
                {
                 printf("No,non è divisibile per K \n");
		return 0;
                }
	 else
		{
		r = r - k;
		goto div;
		}
 }
