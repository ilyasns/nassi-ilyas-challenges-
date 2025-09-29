#include<stdio.h>
int main(){
    char title[50][100];
    char auteur[50][100];
    int prix[50];
    int quantity[50];
    for (int i = 0; i < 50; i++)
    {
        printf("entrez le titre du liver %d: \n",i + 1 ); // i+1 est pour que l etulisateur voir dans la premier insertion titre 1.
        scanf("%49s",&title[i]); // 49 dans %49s est pour ne pas depasser la taille du tableau en lessent un place pour "\0".
    }
    for (int i = 0; i < 50; i++)
    {
        printf("entrez le nom d auteur  du liver %d: \n",i + 1 );
        scanf("%49s",&auteur[i]);
    for (int i = 0; i < 50; i++)
    {
        printf("entrez le prix du liver %d: \n",i + 1 ); 
        scanf("%d",&prix[i]);
    }
     for (int i = 0; i < 50; i++)
    {
        printf("entrez la quantite en stock du liver %d: \n",i + 1 ); 
        scanf("%d",&quantity[i]);
    }
    
     return 0 ;
}


















}