#include <stdio.h>
#include <stdlib.h>



int main()
{
int base,hauteur,air,perimetre;
printf("veuillez entrer la base:");
scanf("%d",&base);
printf("veuillez entrer la hauteur:");
scanf("%d",&hauteur);
air=(base*hauteur)/2;
perimetre=3*base;
printf("air:%d",air);
printf("perimetre:%d",perimetre);
    return 0;
}