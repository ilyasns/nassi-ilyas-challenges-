
#include <stdio.h>

int main() {
    int T,i,R; 
    printf("donner le nombre delement du tableau\n");
    scanf("%d",&T);

    int tab[T];
    int existe=0;

        for ( i = 0; i <T; i++)
        {
          printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
        printf("donner le nombre a rechercher\n");
        scanf("%d",&R);

        for ( i = 0; i < T; i++)
        {
            if (R==tab[i])
            {
               existe=1;
               break;
            }

        }
        if(existe==1){
              printf("le nombre %d se trouve dans tab[%d]\n",R,i);
        }else
        {
          printf("le nombre ne se trouve pas dans le tab\n");
        }
        


        return 0;
}