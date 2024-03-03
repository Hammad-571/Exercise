#include <stdio.h>
int main(void)
{
        int ai[]={0,1};
	double ad[]={0.1,0.2};
	char ac[]="pippo";
        char *pc = ac;
        int *pi = ai;
        double *pd = ad;
        printf("pc = %c\n",pc[0] );
        printf("pi = %d\n",pi[0] );
        printf("pd = %lf\n",pd[0] );
        printf("pc = %p\n",pc[0] );
        printf("pi = %p\n",pi[0] );
        printf("pd = %p\n",pd[0] );
        pc++;
        pi++;
        pd++;
        printf("pc = %c\n",pc[0] );
        printf("pi = %d\n",pi[0] );
        printf("pd = %lf\n",pd[0] );
        printf("pc = %p\n",pc[0] );
        printf("pi = %p\n",pi[0] );
        printf("pd = %p\n",pd[0] );
}
