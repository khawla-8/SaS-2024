#include <stdio.h>
#include <stdlib.h>

int main(){

{
    int annee,mois,jours,hours,minutes,secondes;
    printf("entrer annee:");
    scanf("%d",&annee);
    mois=annee*12;
    jours=mois*30;
    hours=jours*24;
    minutes=hours*60;
    secondes=minutes*60;
    printf("%d\n%d\n%d\n%d\n%d\n",annee,mois,jours,hours,minutes,secondes);

    }
  return 0;
}

