#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre,reverseenombre,milliers,certaines,dizaines,ceux;
printf("entrer 4 nombre:");
scanf("%d",&nombre);
milliers=(nombre/1000);
certaines=(nombre/100)%10;
dizaines=(nombre/10)%10;
ceux=nombre%10;
reverseenombre=(ceux*1000)+(dizaines*100)+(certaines*10)+(milliers);
printf("reverseenombre:%d\n",reverseenombre);
  return 0;
}