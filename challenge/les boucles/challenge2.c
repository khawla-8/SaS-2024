#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,n,i;
    printf(" entrer la valeur de n:");
    scanf("%d",&n);
    P=1;
    for(int i=1;i<=n;i++){
    P=P*i;
    }
    printf("la produit  est:%d",P);
    return 0;
}
