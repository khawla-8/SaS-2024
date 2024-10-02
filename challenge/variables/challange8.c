#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float a,b,c,mg;
    printf("veuillez entrer a,b,c:");
    scanf("%f,&a,b,c");
    mg=pow((a*b*c),(1/3));
    printf("%f,mg");
    return 0;
}