#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int a = 10;
	int b = 20;
	int c ;
	
	c = b;
	b = a;
	a = c;
	printf(" a è %d", a);
	printf("b è %d", b);
}
