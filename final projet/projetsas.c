
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int reference;
    char nom[10];
    char prenom[10];
    char telephone[20];
    int age;
    char statut[20];
    char date[11];
} Reservation;

Reservation reservations[50];
int nb_reservations = 0;
int next_reference = 11;

void afficherMenu()
{
    printf("\n--- Menu Principal ---\n");
    printf("1. Ajouter une reservation\n");
    printf("2. Modifier une reservation\n");
    printf("3. Supprimer une reservation\n");
    printf("4. Afficher les reservations\n");
    printf("5. Trier les reservations par nom\n");
    printf("6. Trier les reservations par statut\n");
    printf("7. rechercher Reservation par reference\n");
    printf("8. rechercher Reservation par nom\n");
    printf("9. Afficher les statistiques\n");
    printf("0. Quitter\n");
    printf("Entrez votre choix : ");
}
void ajouterReservation()
{
    if (nb_reservations < 50)
    {
        Reservation r;
        printf("Entrez le nom : ");
        scanf("%s", r.nom);
        printf("Entrez le prenom : ");
        scanf("%s", r.prenom);
        printf("Entrez le telephone : ");
        scanf("%s", r.telephone);
        printf("Entrez l age : ");
        scanf("%d", &r.age);
        printf("Entrez le statut (valide, reporte, annule, traite) : ");
        scanf("%s", r.statut);
        strcpy(r.date, "2024-10-01");
        r.reference = next_reference++;
        reservations[nb_reservations++] = r;
        printf("Reservation ajoutee avec succes.\n");
    }
    printf("Capacité maximale atteinte.\n");
    return;
}
void modifierReservation()
{
    int ref;
    printf("Entrez la reference de la reservation a modifier : ");
    scanf("%d", &ref);
    for (int i = 0; i < nb_reservations; i++)
    {
        if (reservations[i].reference == ref)
        {
            printf("Modifier le nom : ", reservations[i].nom);
            scanf("%s", reservations[i].nom);
            printf("Modifier le prenom : ", reservations[i].prenom);
            scanf("%s", reservations[i].prenom);
            printf("Modifier le telephone : ", reservations[i].telephone);
            scanf("%s", reservations[i].telephone);
            printf("Modifier l age : ", reservations[i].age);
            scanf("%d", &reservations[i].age);
            printf("Modifier le statut : ", reservations[i].statut);
            scanf("%s", reservations[i].statut);
            printf("Réservation modifiee avec succes.\n");
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

void supprimerReservation()
{
    int ref;
    printf("Entrez la reference de la reservation a supprimer : ");
    scanf("%d", &ref);
    for (int i = 0; i < nb_reservations; i++)
    {
        if (reservations[i].reference == ref)
        {
            for (int j = i; j < nb_reservations - 1; j++)
            {
                reservations[j] = reservations[j + 1];
            }
            nb_reservations--;
            printf("Reservation supprimee avec succes.\n");
            return;
        }
    }
    printf("Réservation non trouvee.\n");
}

void afficherReservation()
{
    for (int i = 0; i < nb_reservations; i++)
    {
        printf("Reference: %d, Nom: %s, Prenom: %s, Telephone: %s, age: %d, Statut: %s, Date: %s\n",
               reservations[i].reference, reservations[i].nom, reservations[i].prenom,
               reservations[i].telephone, reservations[i].age, reservations[i].statut,
               reservations[i].date);
    }
}
void trierParNom()
{
    for (int i = 0; i < nb_reservations - 1; i++)
    {
        for (int j = 0; j < nb_reservations; j++)
        {
            if (strcmp(reservations[i].nom, reservations[j].nom) > 0)
            {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations triees par nom.\n");
}

void trierreservationsparstatut()
{
    for (int i = 0; i < nb_reservations - 1; i++)
    {
        for (int j = 0 ; j < nb_reservations; j++)
        {
            if (strcmp(reservations[i].statut, reservations[j].statut) > 0)
            {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations triees par statut\n");
}

void rechercherReservationparreference()
{
    int ref;
    printf("Entrez la reference de la reservation a rechercher : ");
    scanf("%d", &ref);
    for (int i = 0; i < nb_reservations; i++)
    {
        if (reservations[i].reference == ref)
        {
            printf("Reservation trouvee : %d, Nom: %s, Prenom: %s, Telephone: %s, age: %d, Statut: %s, Date: %s\n",
                   reservations[i].reference, reservations[i].nom, reservations[i].prenom,
                   reservations[i].telephone, reservations[i].age, reservations[i].statut,
                   reservations[i].date);
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

void rechercherReservationparnom()
{
    char nom[30];
    printf("Entrez le nom de la reservation a rechercher : ");
    scanf("%s", &nom);
    for (int i = 0; i < nb_reservations; i++)
    {
        if (reservations[i].nom == nom)
        {
            printf("Reservation trouvee : %d, Nom: %s, Prenom: %s, Telephone: %s, age: %d, Statut: %s, Date: %s\n",
                   reservations[i].reference, reservations[i].nom, reservations[i].prenom,
                   reservations[i].telephone, reservations[i].age, reservations[i].statut,
                   reservations[i].date);
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

void afficherStatistiques()
{
    int total_age = 0;
    int count_0_18 = 0, count_19_35 = 0, count_36_plus = 0;

    for (int i = 0; i < nb_reservations; i++)
    {
        total_age += reservations[i].age;
        if (reservations[i].age <= 18) count_0_18++;
        else if (reservations[i].age <= 35) count_19_35++;
        else count_36_plus++;
    }

    float moyenne_age = total_age / (float)nb_reservations;

    printf("Moyenne d age : %.2f\n", moyenne_age);
    printf("Nombre de patients (0-18 ans) : %d\n", count_0_18);
    printf("Nombre de patients (19-35 ans) : %d\n", count_19_35);
    printf("Nombre de patients (36+ ans) : %d\n", count_36_plus);

    int count_statut[4] = {0};
    for (int i = 0; i < nb_reservations; i++)
    {
        if (strcmp(reservations[i].statut, "validé") == 0) count_statut[0]++;
        else if (strcmp(reservations[i].statut, "reporté") == 0) count_statut[1]++;
        else if (strcmp(reservations[i].statut, "annulé") == 0) count_statut[2]++;
        else if (strcmp(reservations[i].statut, "traité") == 0) count_statut[3]++;
    }

    printf("Statistiques par statut :\n");
    printf("Valide : %d\n", count_statut[0]);
    printf("Reporte : %d\n", count_statut[1]);
    printf("Annule : %d\n", count_statut[2]);
    printf("traite: %d\n",count_statut[3]);
}


int main()
{

    strcpy(reservations[nb_reservations].nom,"laaouini");
    strcpy(reservations[nb_reservations].prenom, "khawla");
    strcpy(reservations[nb_reservations].telephone, "0612121212");
    reservations[nb_reservations].age = 17;
    strcpy(reservations[nb_reservations].statut, "validé");
    reservations[nb_reservations].reference=1;
    strcpy(reservations[nb_reservations].date, "2024-02-06");
    nb_reservations++;
    strcpy(reservations[nb_reservations].nom, "sabir");
    strcpy(reservations[nb_reservations].prenom, "ilham");
    strcpy(reservations[nb_reservations].telephone, "0714141414");
    reservations[nb_reservations].age = 20;
    strcpy(reservations[nb_reservations].statut, "reporté");
    reservations[nb_reservations].reference = 2;
    strcpy(reservations[nb_reservations].date, "2024-02-07");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "hatim");
    strcpy(reservations[nb_reservations].prenom, "errazi");
    strcpy(reservations[nb_reservations].telephone, "0615151515");
    reservations[nb_reservations].age = 42;
    strcpy(reservations[nb_reservations].statut, "annulé");
    reservations[nb_reservations].reference = 3;
    strcpy(reservations[nb_reservations].date, "2024-02-08");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "fadil");
    strcpy(reservations[nb_reservations].prenom, "oussama");
    strcpy(reservations[nb_reservations].telephone, "0616161616");
    reservations[nb_reservations].age = 21;
    strcpy(reservations[nb_reservations].statut, "traité");
    reservations[nb_reservations].reference = 4;
    strcpy(reservations[nb_reservations].date, "2024-02-09");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "elfa");
    strcpy(reservations[nb_reservations].prenom, "Safae");
    strcpy(reservations[nb_reservations].telephone, "0617171717");
    reservations[nb_reservations].age = 22;
    strcpy(reservations[nb_reservations].statut, "validé");
    reservations[nb_reservations].reference = 5;
    strcpy(reservations[nb_reservations].date, "2024-02-10");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "elfa");
    strcpy(reservations[nb_reservations].prenom, "ouafae");
    strcpy(reservations[nb_reservations].telephone, "0618181818");
    reservations[nb_reservations].age = 28;
    strcpy(reservations[nb_reservations].statut, "reporté");
    reservations[nb_reservations].reference= 6;
    strcpy(reservations[nb_reservations].date, "2024-02-11");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "iroual");
    strcpy(reservations[nb_reservations].prenom, "hiba");
    strcpy(reservations[nb_reservations].telephone, "0619191919");
    reservations[nb_reservations].age = 31;
    strcpy(reservations[nb_reservations].statut, "annulé");
    reservations[nb_reservations].reference = 7;
    strcpy(reservations[nb_reservations].date, "2024-02-13");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "qar");
    strcpy(reservations[nb_reservations].prenom, "rayan");
    strcpy(reservations[nb_reservations].telephone, "0620202020");
    reservations[nb_reservations].age = 29;
    strcpy(reservations[nb_reservations].statut, "traité");
    reservations[nb_reservations].reference = 8;
    strcpy(reservations[nb_reservations].date, "2024-02-13");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "Ladi");
    strcpy(reservations[nb_reservations].prenom, "imane");
    strcpy(reservations[nb_reservations].telephone, "0621212121");
    reservations[nb_reservations].age = 26;
    strcpy(reservations[nb_reservations].statut, "validé");
    reservations[nb_reservations].reference = 9;
    strcpy(reservations[nb_reservations].date, "2024-02-14");
    nb_reservations++;

    strcpy(reservations[nb_reservations].nom, "sami");
    strcpy(reservations[nb_reservations].prenom, "ilyas");
    strcpy(reservations[nb_reservations].telephone, "0722222222");
    reservations[nb_reservations].age = 24;
    strcpy(reservations[nb_reservations].statut, "reporté");
    reservations[nb_reservations].reference = 10;
    strcpy(reservations[nb_reservations].date,"2024-02-15");
    nb_reservations++;


    int choix;
    do
    {
        afficherMenu();
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajouterReservation();
            break;
        case 2:
            modifierReservation();
            break;
        case 3:
            supprimerReservation();
            break;
        case 4:
            afficherReservation();
            break;
        case 5:
            trierParNom();
            break;
        case 6:
            trierreservationsparstatut();
            break;
        case 7:
            rechercherReservationparreference();
            break;
        case 8:
            rechercherReservationparnom();
            break;
        case 9:
            afficherStatistiques();
            break;
        case 0:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide.\n");
        }
    }
    while (choix != 0);

    return 0;
}
