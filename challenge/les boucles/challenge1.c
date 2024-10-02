#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i;
    printf(" entrer la valeur de n:");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
    m=n*i;
    printf("%d*%d=%d\n",n,i,m);
    }
    return 0;
}
