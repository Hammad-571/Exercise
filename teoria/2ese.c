#include <stdio.h>
#include <math.h>
int main()
{
        int input ;
        long seq= 0000000000;
        int result = 0;
        printf("Enter the number \n");
        scanf("%d",&input);
        while(input > 0 && input < 10)
        {
                if((int)(seq / pow(10,input)) % 10 == 0 )
                {
                   result = result *10 + input;
                   seq = seq + pow (10,input);
                }
                printf("Enter the number \n");
                scanf("%d",&input);

        }
        printf(" result = %d",result);
}
