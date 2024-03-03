#include <stdio.h>
#include <ctype.h>
int main() {
#define LEN 100
    double num[LEN];
    double total = 0.00;
    for(int i = 0; i < 5 ;i++)
    {
	printf("Enter the number ");
	scanf("%lf", &num[i]);
	total = total + num[i];
	
    }
    printf("the average is %lf", (total/5));
}
