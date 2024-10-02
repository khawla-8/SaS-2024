#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float x1,x2,y1,y2,z1,z2,d;
    printf("veuillez entrer x1,x2,y1,y2,z1,z2:");
    scanf("%f",&x1,x2,y1,y2,z1,z2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf("%f,d");
    return 0;
}