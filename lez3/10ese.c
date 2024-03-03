#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    double min, max,media, solve ;
    printf("Inserisci a: ");
    scanf("%d",&a);

    printf("Inserisci b: ");
    scanf("%d",&b);

    printf("Inserisci c: ");
    scanf("%d",&c);

    printf("Inserisci d: ");
    scanf("%d",&d);

    printf("Inserisci min: ");
    scanf("%lf",&min);

    printf("Inserisci max: ");
    scanf("%lf",&max);

    for(int i = 1 ; i < 10 ; i++)
    {
        media = ( min + max) / 2;
        solve = a*media*media*media + b*media*media + c*media + d;
        if(solve == 0)
        {
           printf("fuck you %lf", media);
           return 0;
        }
        if(solve < 0)
        {
           min = media;
        }
        else
        {
           max = media;
        }
    }
    printf("fuck you %lf", media);

}

