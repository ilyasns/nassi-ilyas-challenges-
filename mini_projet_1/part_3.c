#include <stdio.h>   
#include <string.h>


// function to return to menu apres le remplissage 
void retourMenu() {
    printf("\nAppuyez sur Entrée pour retourner au menu...");
    getchar(); 
    getchar(); 
    system("clear"); 
}



int main(){
    char title[50][100];
    char auteur[50][100];
    int prix[50];
    int quantity[50];
    int menu;
    int i = 0;
    while (1)
    {
        printf("*************** menu ***************\n");
        printf("********* choisire un numero *********\n");
        printf("1 pour donner un titre d un livre\n");
        printf("2 pour donner un auteur d un livre\n");
        printf("3 pour donner un prix d un livre\n");
        printf("4 pour donner une quantitie d un livre\n");
        printf("0 pour quitter\n");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            printf("entrez le titre du livre %d: \n",i + 1 ); // i+1 est pour que l etulisateur voir dans la premier insertion titre 1.
            scanf("%49s",&title[i]); // 49 dans %49s est pour ne pas depasser la taille du tableau en lessent un place pour "\0".
            retourMenu();
            break;
        case 2:
            printf("entrez le nom d auteur  du livre %d: \n",i + 1 );
            scanf("%49s",&auteur[i]);
            retourMenu();
            break;
        case 3:
            printf("entrez le prix du livre %d: \n",i + 1 ); 
            scanf("%d",&prix[i]);
            retourMenu();
            break;
        case 4:
            printf("entrez la quantite en stock du livre %d: \n",i + 1 ); 
            scanf("%d",&quantity[i]);
            i++;
            retourMenu();
            break;
        case 0:
            printf("au revoir :)\n");
            retourMenu();
            break;
        default:
        printf("Choix invalide :/\n");
        retourMenu();
            break;
        }
    }
    
    //affichage des livre disponibles

    for (int i = 0; i < 50; i++)
    {
        if (quantity[i]>0)
         {  
            printf("\nLes livres disponible sont :\n");
            for (int i = 0; i <50; i++)
            {
                printf("Livre %d :\n", i + 1);
            
                for (int j = 0; j < 50; J++)
                {
                    printf("title %d : %s\n", J + 1, title[J]);
                    printf("auteur %d : %s\n", J + 1, auteur[J]);
                    printf("prix %d : %d\n", J + 1, prix[J]);
                    printf("quantite %d : %d\n", J + 1, quantity[J]);

                }
            }
            
         }
    }
    
     return 0 ;
}
