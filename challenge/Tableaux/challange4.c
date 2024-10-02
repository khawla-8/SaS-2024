#include <stdio.h>
#include <stdlib.h>

int main(){


int t[10];
int i,max;
printf("veuillez saisir les elements de tableau:\n");
for(i=0;i<10;i++){
printf("t[%d]= ",i);
scanf("%d",&t[i]);
}
max=t[0];
for(i=1;i<10;i++){
if(max<t[i])
max=t[i];
}
printf("le maximun des elements tableau est:%d",max);
  return 0;
}