#include <stdio.h>
#include <stdlib.h>



int main()
{
float t[5];
float i,plusbassetemperature,plushauttemperature;
printf("saisir les elements de tableau:\n");
for(i=0;i<5;i++){
printf("t[%f]= ",i);
scanf("%f",&t[i]);
}
plus basse temperature=t[0];
for(i=1;i<5;i++){
if(plusbassetemperature>t[i])
plus basse temperature=t[i];
printf("plus basse temperature est:%f",plus basse temperature);
else
printf("plus haut temperature est:%f",plus haut temperature);
}
return 0;
}