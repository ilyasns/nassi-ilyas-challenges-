#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];

    // data colect
    printf("Entrez votre nom : ");
    scanf("%d", &nom);

    printf("Entrez votre prénom : ");
    scanf("%d", &prenom );

    printf("Entrez votre âge : ");
    scanf("%d", &age);
    

    printf("Entrez votre sexe : ");
    scanf("%d", &sexe);

    printf("Entrez votre adresse email : ");
   scanf("%d", &email);

    printf("\n--- Vos informations personnelles ---\n");
    printf("Nom : %f\n", nom);
    printf("Prénom : %f\n", prenom);
    printf("Âge : %f\n", age);
    printf("Sexe : %f\n", sexe);
    printf("Email : %f\n", email);

    return 0;
}
