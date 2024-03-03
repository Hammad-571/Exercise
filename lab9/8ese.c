#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
	{
	   double x;
	   double y;
	} Vett;
	
typedef struct
	{
	   Vett v1;
	   Vett v2;
	   Vett v3;
	} Tri;
double area(Tri t1);
double dist(Vett vet1, Vett vet2);
#define LEN 10
int main()
{
	int n ;
	char input[LEN];
   printf("Enter the name of input file ");
	scanf("%s",input);
	FILE* fp ;
   fp = fopen(input, "r");
   if (fp == NULL)
  	{
    	printf("Could not open file.");
    	return 1;
  	}
  	fscanf(fp,"%d",&n);
  	printf("%d",n);
  	Tri t[n];
  	
  	for(int i = 0; i < n; i++)
  	{
  		fscanf(fp,"%lf %lf %lf %lf %lf %lf",&t[i].v1.x,&t[i].v1.y,&t[i].v2.x,&t[i].v2.y,&t[i].v3.x,&t[i].v3.y);
  		//printf("%lf %lf %lf %lf %lf %lf",t[i].v1.x,t[i].v1.y,t[i].v2.x,t[i].v2.y,t[i].v3.x,t[i].v3.y);
  		double area1 = area(t[i]);
		printf("%lf \n", area1);
  	}
  	
}
double dist(Vett vet1, Vett vet2)
{
	double distance = sqrt(((vet1.x - vet2.x)*(vet1.x - vet2.x))+((vet1.y - vet2.y)*(vet1.y - vet2.y)));
	return distance;
}
double area(Tri t1)
{
	double a = dist(t1.v1 , t1.v2);
	double b = dist(t1.v2 , t1.v3);
	double c = dist(t1.v1 , t1.v3);
	double p = a + b+ c;
	double ar = sqrt(p*(p-a)*(p-b)*(p-c));
	return ar;
}
