#include <stdio.h>

int main()
{
    char c1,c2,c3;
    do{
    	printf("Sunday? \n");
    	c1 = getchar();
        getchar();
    }while(c1 != 'S' && c1 != 'N');

    do{
    	printf("le previsioni del tempo per la giornata sono buone? ");
    	c2 = getchar();
    	getchar();
    }while(c2 != 'S' && c2 != 'N');

    do{
    	printf("pari ");
    	c3 = getchar();
    	getchar();
    }while(c3 != 'S' && c3 != 'N');

    if(c1 == 'S')
    {
	c2 == 'S' ? printf("Il signor Pignolino oggi e' uscito per recarsi dalla signora Precisina. Ha portato con se' un parasole.") : printf("Il signor Pignolino oggi e' uscito per recarsi dalla signora Precisina.  Ha portato con se' un ombrello.");
    }
    else
    {
	if(c2 == 'S')
	{
	  c3 == 'S' ? printf("Il signor Pignolino oggi e' uscito per recarsi ai giardini pubblici. Ha portato con se' un libro."): printf("Il signor Pignolino oggi e' uscito per recarsi al Caffe'.Ha portato con se' il suo diario.");
	}
	else
	{
	  printf("Il signor Pignolino oggi non e' uscito.");
	}
    }
}
