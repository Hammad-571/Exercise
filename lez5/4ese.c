#include <stdio.h>
int main(void)
{
        int j = 0;
        int k = 1;
        int * px ;
        int * py;
        px = &j;
        py = &k;
        printf("px = %d \n",(*px));
        printf("py = %d \n",(*py));
        int *tem;
        tem = px ;
        px = py;
        py = tem;
        printf("px = %d \n",(*px));
        printf("py = %d \n",(*py));
        
}
