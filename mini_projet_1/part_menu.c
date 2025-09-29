#include<stdio.h>
int main(){
    char title[50][100];
    char auteur[50][100];
    int prix[50];
    int quantity[50];
    int menu;
    printf("*************** menu ***************\n");
    printf("********* choisire un numero *********\n");
    printf("1 pour donner un titre d un livre\n");
    printf("2 pour donner un auteur d un livre\n");
    printf("3 pour donner un prix d un livre\n");
    printf("4 pour donner une quantitie d un livre\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("entrez le titre du livre %d: \n",i + 1 ); // i+1 est pour que l etulisateur voir dans la premier insertion titre 1.
        scanf("%49s",&title[i]); // 49 dans %49s est pour ne pas depasser la taille du tableau en lessent un place pour "\0".
        break;
    case 2:
        printf("entrez le nom d auteur  du livre %d: \n",i + 1 );
        scanf("%49s",&auteur[i]);
        break;
    case 3:
        printf("entrez le prix du livre %d: \n",i + 1 ); 
        scanf("%d",&prix[i]);
        break;
    case 4:
        printf("entrez la quantite en stock du livre %d: \n",i + 1 ); 
        scanf("%d",&quantity[i]);
        
        break;
    
    default:
        break;
    }

    for (int i = 0; i < 50; i++)
    {
        printf("entrez le titre du livre %d: \n",i + 1 ); // i+1 est pour que l etulisateur voir dans la premier insertion titre 1.
        scanf("%49s",&title[i]); // 49 dans %49s est pour ne pas depasser la taille du tableau en lessent un place pour "\0".
    }
    for (int i = 0; i < 50; i++)
    {
        printf("entrez le nom d auteur  du livre %d: \n",i + 1 );
        scanf("%49s",&auteur[i]);
    for (int i = 0; i < 50; i++)
    {
        printf("entrez le prix du livre %d: \n",i + 1 ); 
        scanf("%d",&prix[i]);
    }
     for (int i = 0; i < 50; i++)
    {
        printf("entrez la quantite en stock du livre %d: \n",i + 1 ); 
        scanf("%d",&quantity[i]);
    }

    //affichage des livre disponibles
    for (int i = 0; i < 50; i++)
    {
        if (quantity[i]>0)
         {  
            printf("\nLes livres disponible sont :\n");
            for (int i = 0; i < 5; i++)
            {
                printf("title %d : %s\n", i + 1, title[i]);
                printf("auteur %d : %s\n", i + 1, auteur[i]);
                printf("prix %d : %s\n", i + 1, prix[i]);
                printf("quantite %d : %s\n", i + 1, quantity[i]);

             }
            
         }
    }
    
     return 0 ;
}
