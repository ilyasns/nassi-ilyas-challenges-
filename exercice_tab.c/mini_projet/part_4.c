#include <stdio.h>   
#include <string.h>


// function to return to menu apres le remplissage 
void retourMenu() {
    printf("\nAppuyez sur Entree pour retourner au menu...");
    getchar(); 
    getchar(); 
    system("clear"); 
}



int main()
{

    char title[50][100];
    char auteur[50][100];
    int prix[50];
    int quantity[50];
    char search_title[100];
    char search_del[100];

    int new_quantity ;
    int menu_entre,menu1 ;
    int i = 0;

    while (1)
    {
        printf("*************** menu ***************\n");
        printf("********* choisire un numero *********\n");
        printf("1 pour ajouter un livre \n");
        printf("2 pour voir le livre disponible \n");
        printf("3 pour mettre a jour la quantite \n");
        printf("4 pour supprimer un livre du stock\n");
        printf("5 pour afficher le nombre total de livres en stock\n");
        printf("0 pour quitter\n");
        scanf("%d",&menu1);
        switch (menu1)
        {
            case 1:
                Printf("*************** menu ***************\n");
                printf("********* choisire un numero *********\n");
                printf("1 pour donner un titre d un livre\n");
                printf("2 pour donner un auteur d un livre\n");
                printf("3 pour donner un prix d un livre\n");
                printf("4 pour donner une quantitie d un livre\n");
                printf("0 pour quitter\n");
                scanf("%d",&menu_entre);
                switch (menu_entre)
                {
                case 1:
                    // addition des livres

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
            
            break;
            case 2:
                //affichage des livre disponibles

                for (int i = 0; i < 50; i++)
                    {
                        if (quantity[i]>0)
                        {  
                            printf("\nLes livres disponible sont :\n");
                            for (int i = 0; i <50; i++)
                            {
                                printf("Livre %d :\n", i + 1);
                            
                                for (int j = 0; j < 50; j++)
                                {
                                    printf("title %d : %s\n", j + 1, title[j]);
                                    printf("auteur %d : %s\n", j + 1, auteur[j]);
                                    printf("prix %d : %d\n", j + 1, prix[j]);
                                    printf("quantite %d : %d\n", j + 1, quantity[j]);

                                }
                            }
                        }
                    }

            break;
            case 3:
                //recherche d un livre pour changer la quantiteee
                int found = 0;
                printf("Enter le titre du livre a changer la quantite : \n");
                scanf(" %99s",& search_title);
                for (int i = 0; i < 50; i++) {
                    int new_quantity ;
                    if (strcmp(title[i], search_title) == 0) {
                        printf("Enter la nouvelle quantite:\n ");
                        scanf("%d",&new_quantity);
                        quantity[i] = new_quantity;
                        printf("la quantite est met a jour!\n");
                        found = 1;
                    }
                    else (!found){
                        printf("ce livre ne se trouve pas dans la bibliotech !:/\n");
                        break;
                    }
                }
            case 4:
                
            //le recherche pour suprimer
            
                for (int i = 0; i < 50 ; i++)
                {
                    char search_del[100];
                found = 0;
                printf("entre le titre du livre a suprimer: \n");
                scanf("%99s",&searh_del);
                    if (strcmp(title[i],search_del) == 0) {
                        title[i] = title[i+1];

                    
                    }
                }
                
                
                
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
    
    
     return 0 ;
}
