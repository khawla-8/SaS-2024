#include <stdio.h>
#include <stdlib.h>

int main(){


int t[10];
int i,min;
printf("veuillez saisir les elements de tableau:\n");
for(i=0;i<10;i++){
printf("t[%d]= ",i);
scanf("%d",&t[i]);
}
min=t[0];
for(i=1;i<10;i++){
if(min>t[i])
min=t[i];
}
printf("le minimun des elements tableau est:%d",min);
  return 0;
}