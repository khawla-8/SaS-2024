#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,n,i;
    printf(" entrer la valeur de n:");
    scanf("%d",&n);
    s=0;
    for(int i=1;i<=n;i++){
    s=s+i;
    }

    printf("la somme est:%d",s);
    return 0;
}