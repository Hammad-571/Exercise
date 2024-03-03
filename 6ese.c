#include <stdio.h>
int main()
{
        int n,i,r;
        printf("Please enter a number N  \n");
        scanf("%d", & n);
        r = 0;
        i = 2;
        while(n > i)
        {
	 r= n;
	 while(r >= i)
	 {
           r = r-i;
         }
	 if(r == 0)
	 {
	  printf("Non è primo \n" );
	  return 0;
	 }
	 i++;
        }
        printf("è primo \n");
}
