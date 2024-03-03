#include <stdio.h>
int main(void)
{
	void sum(double x, double y);
	void sub(double x, double y);
	void mul(double x, double y);
	void div(double x, double y);
        char oper ;
        double a,b,r ;
        int vero = 0;
        do
        {
            
          printf("0. Inserisci operandi. \n 1 Addizione, \n 2 Sottrazione \n 3 Multiplicazione \n 4 Divisione \n 5 Ecsi \n");
          oper = getchar();
          if(oper != '0' && oper != '1' && oper != '2' && oper != '3' && oper != '4' && oper != '5')
          {
            printf("0. Inserisci operandi. \n 1 Addizione, \n 2 Sottrazione \n 3 Multiplicazione \n 4 Divisione \n 5 Ecsi \n");
            oper = getchar();
          }
          else
          {
            if(oper == '0')
            {
            	vero = 1;
            	printf("Enter a number A ");
          	scanf("%lf", &a);
          	printf("Ent1er a number B ");
          	scanf("%lf", &b);
            }
          	if(oper != '0' && vero == 0)
          	{
          		printf("Error enter again \n");
          		
          	}
          	else
          	{
            	    if(oper == '1' )
           	    {
              		sum(a,b);
            	    }
            	    if(oper == '2' )
            	    {
              		sub(a,b);
            	    }
                    if(oper == '3' )
                    {
              	         mul(a,b);
                    }
                    if(oper == '4' )
                    {
              		div(a,b);
                    }
                 }
           }
        getchar();
        }while(oper != '5');
}

void sum(double x , double y)
{
        printf("The result is %lf \n",x+y);
}

void sub(double x , double y)
{
        printf("The result is %lf \n",x-y);
}

void mul(double x , double y)
{
        printf("The result is %lf \n",x*y);
}

void div(double x , double y)
{
	if(y == 0)
        {
       		printf("Error non puoi dividere con 0");
        }
        else
        {             		
          	printf("The result is %lf \n",x/y);
        }
}
