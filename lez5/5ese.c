#include <stdio.h>
int main(void)
{
        char s[50] = "Galileo Galilei";
        char *pc = s;
 	pc++;
        printf("pc = %c",pc[-1] );
        
}
