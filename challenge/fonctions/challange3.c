#include <stdio.h>
#include <stdlib.h>
float maximal(float a,float b)
{
    float max;
    max=a;
    if(b>max)
    {
        max=b;
    }
    return max;
}
int main()
{
    float a,b;
    printf("\n entrer la valeur de a:");
    scanf("%f",&a);
    printf("\n entrer la valeur de b:");
    scanf("%f",&b);
    printf(" max = %f",maximal(a,b));

    return 0;
}