#include <stdio.h>
#include <math.h>
int main()
{
        int input ;
        int result;
        do{
           printf("Enter the number \n");
           scanf("%d",&input);
        }while(input <= 0 );
        for(int i = 1; i <= input; i++)
        {
           result = result + i*i;
        }
        printf(" result without formula = %d \n",result);
        printf("result with the formula = %d \n", ((input*(input +1)*(2*input +1))/ 6));
}
