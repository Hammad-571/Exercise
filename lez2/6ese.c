 #include <stdio.h>
int main(void)
{
        int oper ;
        double a,b,r ;
	while(1)
	{
          printf("Enter a number A ");
          scanf("%lf", &a);
          printf("Ent1er a number B ");
          scanf("%lf", &b);
          printf("Enter 1 for sum, 2 for subtraction, 3 for multiplication, 4 for division ");
          scanf("%d",&oper);
	  if(oper !=1 && oper !=2 && oper !=3 && oper !=4)
	  {
            printf("Error \n");
	  }
	  else
	  {
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
              if(b == 0)
              {
	       printf("Error non puoi dividere con 0");
	      }
	      else
	      {
	        r = a/b;
                printf("The result is %lf",r); 
	      }
            }
	  }
	}
}

