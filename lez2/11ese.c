#include <stdio.h>
#include <ctype.h>
int main(void)
{
        char c;
        char enter = '\n';
                printf("Enter the charater \n");
                c = getchar();
                if(isalpha(c) && c != enter)
                {
                    if(isupper(c) == 0)
                    {
                        c = toupper(c); 
			printf("The character is %c  \n", c);
                    }
                    else
                    {
                        printf("The character is %c  \n", c);
                    }
                }
                else
                {
                        printf("The character is \n %c",c);
                }
}
