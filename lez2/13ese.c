#include <stdio.h>
#include <ctype.h>
int main(void)
{
        char c;
        int choice;
        printf("Enter the charater \n");
        c = getchar();
        if(isalpha(c))
        {
             printf("to convert from lower class to upper class press 1 and from upper to lower class press 2 \n");
             scanf("%d",&choice);
             if(choice == 1)
             {
                 c = toupper(c);
                 printf("The character is %c  \n", c);
             }
             else
             {
                c = tolower(c);
                printf("The character is %c  \n", c);
             }
         }
         else
         {
             printf("Error, this %c isn't a character",c);
	     return -1;
         }
}

