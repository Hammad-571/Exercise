#include <stdio.h>
#include <string.h>
int main() {
#define LEN 100
    char str[LEN];
    int count = 0;
    printf("enter the character  ");
    fgets(str,LEN,stdin);
    while(str[0] != '\n')
    {
        if(strlen(str) > count)
        {
		count = strlen(str);
        }

        printf("enter the character  ");
        fgets(str,LEN,stdin);
    }
    printf("%d",count);
    
    return 0;
}
