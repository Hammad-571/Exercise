#include <stdio.h>
int main(void)
{
        int oper ;
	double a,b,r ;
        printf("Enter a number A ");
        scanf("%lf", &a);
        printf("Ent1er a number B ");
        scanf("%lf", &b);
	printf("Enter 1 for sum, 2 for subtraction, 3 for multiplication, 4 for division ");
	scanf("%d",&oper);
	if(oper == 1 )
	{
	  r = a + b ;
	  printf("The result is %lf",r);
	}
	if(oper == 2 )
	{
	  r = a - b;
	  printf("The result is %lf",r);
	}
	if(oper == 3 )
        {
	  r = a*b;
	  printf("The result is %lf",r);
	}
	if(oper == 4 )
	{
          r = a/b;
	  printf("The result is %lf",r);
	}
}
