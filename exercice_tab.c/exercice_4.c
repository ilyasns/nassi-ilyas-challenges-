#include <stdio.h>

int main() {
    int T,i; 
    int max;
    printf("donner le nombre d'élément du tableau\n");
    scanf("%d",&T);

    int tab[T];
  
        for ( i = 0; i <T; i++)
        {
         printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
    

    for ( i = 0; i < T; i++) {
        max = tab [0];
        if ( max < tab[i]){
            max = tab [i];
        }
    
    }
 printf("la  valeure max  du tab[%d]est:%d", T ,max); 
    return 0;
}
// ex 4
