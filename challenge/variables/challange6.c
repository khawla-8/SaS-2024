#include <stdio.h>
#include <stdlib.h>

int main(){

   float A,B,S,P,DF,DV;
   printf("VEUILLEZ ENTRER LA VALEUR DE A:");
   scanf("%F,&A");
   printf("VEUILLEZ ENTRER LA VALEUR DE B:");
   scanf("%F,&B");
   S=A+B;
   DF=A-B;
   P=A*B;
   DV=A/B;
   printf("A+B=%F",S);
   printf("A-B=%F",DF);
   printf("A*B=%F",P);
   printf("A/B=%F",DV);

}