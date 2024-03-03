#include <stdio.h>
int main()
{
        int num,even,total,rest;
	num= 0;
        even = 0;
	total = 0;
	rest =0;
        do
        {
          printf("Enter a number bigger than 0 or -1 to exit ");
	  scanf("%d", &num);
          if(num != -1)
	  {
	    total++;
	    rest = num;
	    while(rest >= 2)
	    {
	      rest = rest - 2;
            }
	     if(rest == 0 )
	     {
	       even++;
	     }
	  }
        }while(num != -1);

        printf("There are %d even numbers \n", even);
        printf("The total numbers are %d \n", total);
	return 0;
}

