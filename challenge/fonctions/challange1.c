#include <stdio.h>
#include <stdlib.h>
int somme(int a,int b){
int s;
s=a+b;
return s;
}

int main()
{
    int a,b;
    printf("\n entrer la valeur de a:");
    scanf("%d",&a);
    printf("\n entrer la valeur de b:");
    scanf("%d",&b);
    printf(" somme = %d",somme(a,b));

    return 0;
}