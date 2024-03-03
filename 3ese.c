#include <stdio.h>
int main()
{
        int x,y,m1,m2 ;
        printf("Please enter a number N  ");
        scanf("%d", & x);
        printf("Please eanter a number K ");
        scanf("%d", &y);
        m1 = x;
	m2 = y;
        div:
         if(m1 == m2 )
          {
                 printf("mcm è %d \n", m1);
                return 0;
          }
	else
	{
         if(m1 < m2)
                {
		m1 = m1 + x;
                goto div;
		 }
         else
                {
                m2 = m2 + y;
		goto div;
		}
	}
}
