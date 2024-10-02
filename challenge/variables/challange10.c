#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float r,v;
printf("entrer la valeur de r:");
scanf("%f",&r);
v=3.14*pow(r,3)*4/3;
printf("la valeur est:%.2f",v);
}