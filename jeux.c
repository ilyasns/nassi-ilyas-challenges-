#include <stdio.h>
#include <string.h>
 

int points = 0 ;
int
typedef struct 
 {
    char text [100];
    char reponse [100];
    int reponse_correct ;
    
 }question ;
 typedef struct 
 {
    char  name [100];
    int score = 0 ;
 }player;
 
 void start(){
    
    printf("donner un nom au joueur");
    gets(player[i].name);
    player_num ++;
    score = 0 ;

 }
 void classement(){
    printf("voici le classement des joueur");
    for (int i = 0; i < player_num; i++)
    { 
        if (player[i].score> player[i+1].score )
        {
            
        }
        

        
    }
    
 }
 void retourMenu() {
    printf("\nAppuyez sur Entree pour retourner au menu...");
    getchar(); 
    getchar(); 
    system("clear"); 
    
}
 void jeux(){
    



 }



 int main(){
    int choix ;

    start();
    //menu 
    printf("1-jouer le jeux\n");
    printf("2-voir le classement\n");
    printf("3-quitter\n");
    printf("chosire \n");
    scanf("%d",choix);
    switch (choix)
    {
    case 1 :
        jeux();
        retourMenu();
        break;
    case 2 :
        classement();
        retourMenu();
        break;
    case 3:
        quitter();
        break;
    default:
        printf("choix unvilide. Please try again.8)\n");
        retourMenu();
        break;
    }






    return 0;
}
 