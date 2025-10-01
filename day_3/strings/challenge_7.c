#include <stdio.h>
#include <ctype.h>  

int main() {
    char chaine[100];

    printf("Entrez une chaîne de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = '\0';


    for (int i = 0; chaine[i] != '\0'; i++) {
        chaine[i] = toupper(chaine[i]);
    }

    printf("Chaîne en majuscules : %s\n", chaine);

    return 0;
}
