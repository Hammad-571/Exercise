#include <stdio.h>
int main(void)
{
        int a,b,i ;
        printf("Enter a number A ");
        scanf("%d", &a);
        printf("Ent1er a number B ");
        scanf("%d", &b);
        if(a > 0 && b > 0)
        {
	  i=0;
          while(a!=b)
          {
            if(a>b)
            {
              a = a-b ;
            }
            else
            {
              b = b-a;
            }
	   i++;
          }
         printf("M.C.D. è %d \n",a);
	 printf("The counter is %d",i);
         return 0;
        }
        else
        {
         printf("Error a and b must be bigger than 0");
         return -1;
        }
}
