
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100 // nember max des livre

// function to return to menu apres le remplissage 
void retourMenu() {
    printf("\nAppuyez sur Entree pour retourner au menu...");
    getchar(); 
    getchar(); 
    system("clear"); 
    
}

// tableau avec bibliotech info
char title[MAX_BOOKS][100];     
char auteur[MAX_BOOKS][100];   
float prix[MAX_BOOKS];          
int quantity[MAX_BOOKS];      

int book_num = 0; 

// founction ajouter un livre 
void addBook() {
    if (book_num >= MAX_BOOKS) {
        printf(" Le stock est plein :/.\n");
        return;
    }
    printf("Enter le titre du livre: ");
    scanf(" % 99s ", title[book_count]);
    printf("Enter le nom de l auteur du livre: ");
    scanf(" % 99s", auteur[book_count]);
    printf("Enter le pris du livre: ");
    scanf("%f", &prix[book_count]);
    printf("Enter la quantite dans le stock: ");
    scanf("%d", &quantity[book_count]);
    book_count++; 
    printf("Ce livre a ete ajouter ;)!\n");
}

// fonction afficher les livres disponible
void displayBooks() {
    if (book_num == 0) {
        printf("auqu'un livre ne se trouve dans le stock!\n");
        return;
    }
    printf("\nList des livres disponible dans la bibliotech:\n");
    for (int i = 0; i < book_num; i++) {
        printf("%d. Titre: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",  i+1, title[i], auteur[i], prix[i], quantity[i]);
    }
}

// Function recherche d un livre avec le titre
void searchBook() {
    char search_title[100];
    printf("Enter le nom du livre vous recherchez: ");
    scanf(" %99s", search_title);
    for (int i = 0; i < book_num; i++) {
        if (strcmp(titles[i], search_title) == 0) {
            printf("Found!\nAuteur: %s | Prix: %.2f | Quantitee: %d\n",
                   auteur[i], prix[i], quantity[i]);
            return;
        }
    }
    printf("Livre ne setrouve pas dans le stock.\n");
}

// Function mettre a jour du stock 
void updateQuantity() {
    char search_maj[100];
    int new_quantity;
    printf("Enter le titre du livre que vous voulez mettre a jour son quantite: ");
    scanf(" %99s", search_maj);
    for (int i = 0; i < book_num; i++) {
        if (strcmp(titles[i], search_maj) == 0) {
            printf("Enter la nouvelle quantite: ");
            scanf("%d", &new_quantity);
            quantities[i] = new_quantity;
            printf("Quantite mise a jour avec succes! <3\n");
            return;
        }
    }
    printf("Livre ne setrouve pas dans le stock.\n");
}

// Function suprimer un livre du stock
void deleteBook() {
    char search_del[100];
    printf("Enter le titre du livre vous voulez suprimer: ");
    scanf(" %99s", search_del);
    for (int i = 0; i < book_num; i++) {
        if (strcmp(titles[i], search_del) == 0) {
            for (int j = i; j < book_count-1; j++) {
                strcpy(titles[j], titles[j+1]);
                strcpy(auteur[j], auteur[j+1]);
                prices[j] = prices[j+1];
                quantity[j] = quantity[j+1];
            }
            book_num--; 
            printf("ce livre est suprime avec succes <3!\n");
            return;
        }
    }
    printf("Livre ne setrouve pas dans le stock.\n");
}

// Function affichage de stock
void totalBooks() {
    int total = 0;
    for (int i = 0; i < book_num; i++) {
        total = total + quantities[i];
    }
    printf("Total du numbre des livre dans le stock est: %d\n", total);
}

// Main menu 
int main() {
    int choix;
    printf("*****Bienvenue dans le système de gestion des stocks de la bibliothèque!*****\n");
    do {
        printf("\n        ------------ Menu ------------        \n");
        printf("               1. Ajouter un livre               \n");
        printf("               2. afficher tous les livres               \n");
        printf("               3. rechercher un livre avec son titre               \n");
        printf("               4. Changer la quantite d'un livre               \n");
        printf("               5. Suprimer un livre               \n");
        printf("               6. afficher le  nombre total des livres               \n");
        printf("               0. Exit               \n");

        printf(" \n                 Votre choice:               \n");
        scanf("%d", &choix);

        switch (choix) {
            case 1: addBook();
            break;
            case 2: displayBooks();
            break;
            case 3: searchBook(); 
            break;
            case 4: updateQuantity(); 
            break;
            case 5: deleteBook(); 
            break;
            case 6: totalBooks(); 
            break;
            case 0: printf("****************Goodbye!<3****************\n"); 
            break;
            default: printf("choix unvilide. Please try again.8)\n");
            retourMenu()
            
        }
    } while (choice != 0);

    return 0;
}
 








/*estern eggs */