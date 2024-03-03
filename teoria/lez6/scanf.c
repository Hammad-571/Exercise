#include <stdio.h>
#include <math.h>
int main()
{
        int a,b ;
	char oper;
        printf("Inserisci un numero o -1 per uscire \n");
        scanf("%d %c %d",&a , &oper , &b);
       
           switch(oper)
           {
                case '+' :
                        printf("a + b = %d", a+b);   break;
                case '-' :
                        printf("a - b = %d", a-b);   break;
                case '/' :
                        printf("a / b = %d", a/b);   break;
                case '*' :
                        printf("a * b = %d", a*b);   break;
                default :
                        printf("Non è una operazione");  break;
           }
}

