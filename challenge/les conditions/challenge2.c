#include <stdio.h>
#include <stdlib.h>

int main(){
int caractere;
printf("entrer le caractere:");
scanf("%d",&caractere);
switch(caractere){

case 'a': printf("voyelle");
break;
case 'i':printf("voyelle");
break;
case 'u':printf("voyelle");
break;
case 'o':printf("voyelle");
break;
case 'e':printf("voyelle");
break;
case'y':printf("voyelle");
break;
default:printf("non");
}

    return 0;

}