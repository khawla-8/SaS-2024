#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,c,delta,x1,x2,x;
printf("entrer la valeur de a:");
scanf("%f",a);
printf("entrer la valeur de b:");
scanf("%f",b);
printf("entrer la valeur de c:");
scanf("%f",c);
delta=pow(b,2)-4*a*c;
x1=-b+sqrt(delta)/2*a;
x2=b+sqrt(delta)/2*a;
x=-b/(2*a);
if(delta>0){
   printf("equation admet deux solution x1etx2");
}else if(delta=0){
printf("equation admet une seule solution x");
}
else{
printf("equation nadmet pas une solution");
}

    return 0;

}