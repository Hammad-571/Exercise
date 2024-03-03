#include <stdio.h>
#include <ctype.h>

int main() {
    int LEN = 30;
    char str[LEN];
    char str1[LEN];
    char c ;
    printf("enter the character  ");
    scanf("%s \n",str);

    for(int i = 0; i < LEN ; i++)
    {
	c = str[i];
        if(isupper(c))
        {
	    c = tolower(c);
        }
        else
        {
           c = toupper(c);
        }
	str1[i] = c ;
    }
	
	printf("the old string %s \n",str);
	printf("The new string %s \n",str1);
}
