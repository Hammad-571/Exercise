#include <stdio.h>
#include <math.h>
int main()
{
        int input ;

	printf("Inserisci un numero o -1 per uscire \n");
        scanf("%d",&input);
	while(input != -1)
        {
	   switch(input)
	   {
	    	case 1 :
			printf("Uno");   break;
		case 2 :
                        printf("Due");   break;
                case 3 :
                        printf("Tre");   break;
                case 4 :
                        printf("Quattro");   break;
                case 5 :
                        printf("Cinque");   break;
                case 6 :
                        printf("Sei");   break;
                case 7 :
                        printf("Sette");   break;
                case 8 :
                        printf("Otto");   break;
                case 9 :
                        printf("Nove");   break;
                case 0 :
                        printf("Zero");   break;
	   	default :
			printf("Non è una cifra");  break;
      	   }
	   printf("\n Inserisci un numero o -1 per uscire \n");
           scanf("%d",&input);
        }
}
