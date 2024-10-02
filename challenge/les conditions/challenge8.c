#include <stdio.h>
#include <stdlib.h>

int main(){
    float m;
    printf("entrer la valeur de m:");
    scanf("%f",&m);
    if(m<10){
    printf("recale");
    }
    else if(10<m&&m<12){
    printf("mention passable");
    }
    else if(12<m&&m<14){
    printf("mention assez bien");
    }
    else if(14<m&&m<16){
    printf("mention bien");
    }
    else if(m>16){
    printf("mention tres bien");
    }
    else{
    printf("errour");
    }

    return 0;

}
