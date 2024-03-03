#include <stdio.h>
#include <ctype.h>

int main() {
#define LEN 100
    char str[LEN];
    char c ;
    printf("enter the character  ");
    c = getchar();
    getchar();
    printf("enter the character  ");
    fgets(str,LEN,stdin);
    for(int i = 0; i < LEN; i++)
	{
	  if(str[i] == c)
	  {
	  	printf("Si");
	  	i = LEN;
	  }
	  else
	  {
	  	printf("No");
	  }
	}

}
