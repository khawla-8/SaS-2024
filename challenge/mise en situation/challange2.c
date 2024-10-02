#include <stdio.h>
#include <stdlib.h>



int main()
{
float t;
printf("veuillez entrer votre temperature:");
scanf("%f",&t);
if(t<=38)
printf("votre temperature est normale");
else
printf("vous avez de la fievre");
    return 0;
}