#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char nom[20];
    char telephone[10];
    char email[30];
} Contact;

Contact contacts[50];
int contactcount = 0;

void ajoutercontact() {
    if (contactcount < 50) {
        printf("Entrez le nom: ");
        scanf("%s", contacts[contactcount].nom);
        printf("Entrez le telephone: ");
        scanf("%s", contacts[contactcount].telephone);
        printf("Entrez email: ");
        scanf("%s", contacts[contactcount].email);
        contactcount++;
    } else {
        printf("la liste des contacts plein.\n");
    }
}
void modifiercontact() {
    char nom[20];
    printf("Entrez le nom a modifier: ");
    scanf("%s", nom);
    for (int i = 0; i < contactcount; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nouveau telephone: ");
            scanf("%s", contacts[i].telephone);
            printf("Nouvel email: ");
            scanf("%s", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}
void supprimercontact() {
    char nom[20];
    printf("Entrez le nom a supprimer: ");
    scanf("%s", nom);
    for (int i = 0; i < contactcount; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            contacts[i] = contacts[contactcount - 1];
            contactcount--;
            return;
        }
    }
    printf("Contact non trouvé.\n");
}
void affichercontacts() {
    for (int i = 0; i < contactcount; i++) {
        printf("Contact %d: %s, %s, %s\n", i + 1, contacts[i].nom, contacts[i].telephone, contacts[i].email);
    }
}
void recherchercontact() {
    char nom[20];
    printf("Entrez le nom a rechercher: ");
    scanf("%s", nom);
    for (int i = 0; i < contactcount; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Contact trouvé: %s, %s, %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}
int main() {
    int choix;
    do {
        printf("1. Ajouter contact\n2. modifiercontact\n3.supprimercontact\n4. affichercontacts\n5. recherchercontact\n6. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajoutercontact();
             break;
            case 2: modifiercontact();
            break;
            case 3: supprimercontact();
             break;
            case 4: affichercontacts();
             break;
            case 5: recherchercontact();
             break;
            case 6: printf("sortir\n");
            break;
            default: printf("Option invalide.\n");
        }
    }while(choix!=6);
    return 0;
}






