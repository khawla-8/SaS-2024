#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,premier;
printf("veuillez entrer la valeur de n:");
scanf("%d",&n);
premier=1;
if(n == 1){
    premier = 1;
    break;
}
for(i=2;i < n;i++){
    if(n%i==0){
    premier=0;
    break;
    }
if(premier==1)
printf("%d est un nombre premier",n);
else
printf("%d est un nombre non premier",n);
}
}