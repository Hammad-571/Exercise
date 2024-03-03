#include <stdio.h>
#define LEN 100
int main () 
{
	char input[LEN];
   printf("Enter the name of input file ");
	scanf("%s",input);
	
   FILE *fp;
   char str[256];

   /* opening file for reading */
   fp = fopen(input , "r");
   if(fp == NULL) 
   {
      perror("Error opening file");
      return(-1);
   }
   while( !feof(fp) ) {
      /* writing content to stdout */
      fgets (str, 256, fp);
      puts(str);
   }
   fclose(fp);
   return(0);
}
