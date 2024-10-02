#include <stdio.h>
#include <stdlib.h>
float minimal(float a,float b)
{
    float min;
    min=a;
    if(b<min)
    {
        min=b;
    }
    return min;
}
int main()
{
    float a,b;
    printf("\n entrer la valeur de a:");
    scanf("%f",&a);
    printf("\n entrer la valeur de b:");
    scanf("%f",&b);
    printf(" max = %f",minimal(a,b));

    return 0;
}