#include <stdio.h>
#include <stdlib.h>
int produit(int a,int b){
int p;
p=a*b;
return p;
}

int main()
{
    int a,b;
    printf("\n entrer la valeur de a:");
    scanf("%d",&a);
    printf("\n entrer la valeur de b:");
    scanf("%d",&b);
    printf(" produit = %d",produit(a,b));

    return 0;
}