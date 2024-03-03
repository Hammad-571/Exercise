#include <stdio.h>
#define LEN 100
int main () 
{
	char input[LEN];
   printf("Enter the name of input file ");
	scanf("%s",input);
	
	char out[LEN];
   printf("Enter the name of input file ");
	scanf("%s",out);
	
   FILE *fin;
   FILE *fout;
   char c;

   /* opening file for reading */
   fin = fopen(input , "r");
   fout = fopen(out , "w");
   if(fin == NULL) 
   {
      perror("Error opening file");
      return(-1);
   }
   while( !feof(fin) ) {
      c = getc(fin);
      if(c != EOF)
      {
      printf("%c",c);
      fprintf(fout,"%c",c);
      }
   }
   fclose(fin);
   fclose(fout);
   return 0;
}
