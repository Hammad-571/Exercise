#include <stdio.h>
int main()
{
        int num,numofSum,t,sum,total,rest,i;
        num= 0;
        sum = 0;
        total = 0;
        rest =0;
        i=0;
        numofSum = 0;
        do
        {
          rest = 0;
          sum = 0;
          printf("Ent1er a number bigger than 0 or -1 to exit ");
          scanf("%d", &num);
          if(num !=0)
          {
            if(i == 0)
            {total = 1;}
            else if (i == 1)
            {
                total = total +2; 
                numofSum = 1;
            }
            else
            {
              while(rest < numofSum+numofSum)
              {
                rest++;
                sum = sum + 2;
              }
              numofSum = numofSum+ numofSum;
              total = total + sum;
            }
          }
          else
          {
            if (i == 1)
            {
                numofSum = 1;
            }
            else
            {
              while(rest < numofSum+numofSum)
              {
                rest++;
                sum = sum + 2;
              }
              numofSum = numofSum+ numofSum;
              total = total + sum - sum;
            }
          }
          i++;
          printf("total is %d \n", total);
         }while(i<= 7);
        return 0;
}
