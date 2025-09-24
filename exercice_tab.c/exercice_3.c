#include <stdio.h>

int main() {
    int T,i; 
    int s =0;
    printf("donner le nombre d'élément du tableau\n");
    scanf("%d",&T);

    int tab[T];
  
        for ( i = 0; i <T; i++)
        {
         printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
    

    for ( i = 0; i < T; i++) {
        s = s + tab[i];
        printf("la somme de tous les valeurs du tab[%d]=%d", T ,s); 
    }

    return 0;
}
// ex 2
