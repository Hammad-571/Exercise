#include <stdio.h>
#include <string.h>
int main()
{
#define N 50
    int arr[N], num, x, y, temp;   
    int con = 0; 
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);    
    
    for(x = 0; x < num; x++)
    {
    	printf("Please Enter the Value of Elements: ");
        scanf("%d", &arr[x]);
    }
    for(x = 0; x < num - 1; x++){       
        for(y = 0; y < num - x - 1; y++){          
            if(arr[y] > arr[y + 1])
            {               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
                con++;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++)
    {
        printf("%d  ", arr[x]);
    }
    printf("The counter is %d", con);
    printf("N2/ 2 = %d", num*num/2);
    return 0;
}
