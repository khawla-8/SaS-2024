#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char nom[20],prenom[20],sexe[20],adresseEmail[40];
    printf("veuillez entrer votre nom:");
    scanf("%s",&nom);
    printf("veuillez entrer votre prenom:");
    scanf("%s",&prenom);
    printf("veuillez entrer votre age:");
    scanf("%d",&age);
    printf("veuillez entrer votre sex:");
    scanf("%s",&sexe);
    printf("veuillez entrer votre adresse email:");
    scanf("%s",&adresseEmail);



    printf("%s %s %d %s %s", nom, prenom, age,sexe, adresseEmail);
    return 0;
}