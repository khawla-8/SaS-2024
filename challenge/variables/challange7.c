#include <stdio.h>
#include <stdlib.h>

int main()
{

    int an,bn,cn,m,mg;
    printf("entrer an:");
    scanf("%d",&an);
    printf("entrer bn:");
    scanf("%d",&bn);
    printf("entrer cn:");
    scanf("%d",&cn);
    m=(an*2)+(bn*3)+(cn*5);
    mg=m/10;
    printf("mg:%d",mg);
  return 0;
}