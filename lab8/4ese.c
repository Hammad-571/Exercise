#include <stdio.h>
#define LEN 100
int main () 
{

	char out[LEN];
   printf("Enter the name of output file ");
	scanf("%s",out);
	
   FILE *fout;
    char str[BUFSIZ];

   /* opening file for reading */
   fout = fopen(out , "w");
   if(fout == NULL) 
   {
      perror("Error opening file");
      return(-1);
   }
   printf("Enter");
   
   while( fgets (str, BUFSIZ, stdin) != NULL ) 
   {
      fprintf(fout,"%s",str); 
   }
   
   /*
   char c = getchar();
       
   while((c = getchar())!=EOF)
    putc(c,fout);
    */
   fclose(fout);
   return 0;
}
