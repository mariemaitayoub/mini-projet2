#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct carnet
{
    char nom[20];
    char num_de_tele;
    char adresse_email[50];
};
int count=0;
struct carnet contacts[100];
int a;

int main() {
int choice;
do{
    system("cls");
    printf("\n ---------------Menu---------------------\n");
     printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("0. Quitter\n");
        printf("\n------------------------------\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);

switch(choice){
case 1://Ajouter un Contact
    ajouterContact();
    break ;
    case 2: //Modifier un Contact
 modifierContact();
 break;
    case 3://Supprimer un Contact
      //  supprimerContact();
        break;
    case 4://Afficher Tous les Contacts
        afficherContacts();
        break;
    case 5://Rechercher un Contact
     //   rechercherContact();
        break;
    case 0:// Quitter
         quitter();
    default:
        printf("Choix invalide, veuillez réessayer.\n");
}
}
while (choice !=0);
return 0;
}
void  ajouterContact(){
printf("entrer le nom :");
scanf("%s",&contacts[count].nom);
printf("entrer le numero de tele :");
scanf("%s",&contacts[count].num_de_tele);
printf("entrer l'adresse email :");
scanf("%s",&contacts[count].adresse_email);
count++;
system("pause");
}
void quitter(){
printf("Au revoir!\n");
}
void afficherContacts(){
    printf("les contacts est %d\n",count);
    system("pause");
}
void  modifierContact(){
if (count > 0) {
        int i;
        printf("Numéro du contact à modifier (1 à %d) : ", count);
        scanf("%d", &i);
        if ( i > 0 && i <= count) {
            printf("Nouveau nom : ");
            scanf("%s", contacts[i-1].nom);
            printf("Nouveau numéro de télé : ");
            scanf("%s", contacts[i-1].num_de_tele);
            printf("Nouvel email : ");
            scanf("%s", contacts[i-1].adresse_email);
        } else {
            printf("Numéro invalide\n");
        }
    } else {
        printf("Aucun contact à modifier.\n");
    }
    system("pause");
}



