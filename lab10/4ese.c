#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main()
{
	void bubble(double * po,int n);
   void add(double * po,int n);
       
	char input[LEN];
   printf("Enter the name of input file ");
	scanf("%s",input);
       
       
   char output[LEN];
   printf("Enter the name of output file ");
	scanf("%s",output);  
	
   FILE* fp ;
   fp = fopen(input, "r");
   if (fp == NULL)
  	{
    	printf("Could not open file.");
    	return 1;
  	}
  	
   int len;
   for (int c = getc(fp); c != EOF; c = getc(fp))
    	if (c == '\n') // Increment count if this character is newline 
      	len++;
   
   rewind(fp);
   
   double *pt; 
   pt = malloc (len*sizeof(double));  
   int i = 0;
   while(fscanf(fp,"%lf",pt+i)==1)
    {
    	printf("%lf\n",*(pt+i));
    	i++;
    }
	/*while(fscanf(fp,"%lf",pt+i)==1)
    {
    	pt = (double *)realloc (pt,i*sizeof(double));  
    	printf("%lf\n",*(pt+i));
    	i++;
    }
    */
	fclose(fp);
	
	bubble(pt,len);

   fp = fopen(output, "w");
   if (fp == NULL)
  	{
    	printf("Could not open file.");
    	return 1;
  	}
  	for(int i = 0; i <len; i++)
  		fprintf(fp,"%lf\n",*(pt+i));
  		//fprintf(fp,"%s","\n");
}

void bubble(double * po,int n)
{
	double temp;
	int scambio = 0;
	while (scambio==0)
	{
	  scambio = 1;
	  for (int i=0; i<=n-2; i++ )
	  {
	     if ( *(po+i)> *(po+i+1) )
	     {
			temp = *(po+i);
			*(po+i) = *(po+i+1);
			*(po+i+1) = temp;
  			scambio=0;
  	     }
  	  }
  	}
}
