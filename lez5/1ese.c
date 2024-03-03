#include <stdio.h>
int main(void)
{
        char oper ;
        double a,b,r ;
        do
        {
          printf("Enter a number A ");
          scanf("%lf", &a);
          printf("Ent1er a number B ");
          scanf("%lf", &b);
          printf("1 Addizione, \n 2 Sottrazione \n 3 Multiplicazione \n 4 Divisione \n 5 Ecsi \n");
          scanf("%c",&oper);
          if(oper !=1 && oper !=2 && oper !=3 && oper !=4 && oper != 5)
          {
            printf("1 Addizione, \n 2 Sottrazione \n 3 Multiplicazione \n 4 Divisione \n 5 Ecsi \n");
            scanf("%c",&oper);
          }
          else
          {
            if(oper == 1 )
            {
              r = a + b ;
              printf("The result is %lf \n",r);
            }
            if(oper == 2 )
            {
              r = a - b;
              printf("The result is %lf \n",r);
            }
            if(oper == 3 )
            {
              r = a*b;
              printf("The result is %lf \n",r);
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
                printf("The result is %lf \n",r); 
              }
            }
          }
        }while(oper != 5);
}
