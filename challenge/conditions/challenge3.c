#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,s;
printf("entrer la valeur de a:");
scanf("%f",a);
printf("entrer la valeur de b:");
scanf("%f",b);
if(a==b){
s=(a+b)*3;
}
else{
s=a+b;
printf("%f",&s);
}


    return 0;

}
