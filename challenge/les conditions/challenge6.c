#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("entrer la valeur de n:");
    scanf("%d",&n);
    if(n<0){
    printf("le nombre est negatif");
    }
    else if(n>0){
        printf("le nombre est positive");
    }
    else{
        printf("le nombre est nul");
    }

    return 0;

}