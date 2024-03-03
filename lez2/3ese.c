#include <stdio.h>
int main(void)
{
        int a , b ;
        printf("Enter a number A ");
        scanf("%d", &a);
        printf("Ent1er a number B ");
        scanf("%d", &b);
	if(a > 0 && b > 0)
	{
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
         }
         printf("M.C.D. è %d \n",a);
         return 0;
	}
	else
	{
	 printf("Error a and b must be bigger than 0");
	 return -1;
	}
}

