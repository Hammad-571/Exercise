#include <stdio.h>

int main () 
{
   FILE *fp;
   char str[256];

   /* opening file for reading */
   fp = fopen("1ese.c" , "r");
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
