#include <stdio.h>
int main(void)
{
	int a , b ;
	printf("Enter a number A ");
        scanf("%d", &a);
	printf("Ent1er a number B");
        scanf("%d", &b);
	while(a!=b)
	{
	  if(a>b)
	  {
	   a = a-b ;
 	  }
	  else
	  {
	   b = b-a;
	  }
	}
	printf("%d \n",a);
	return 0;
}
