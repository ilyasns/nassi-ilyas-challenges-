#include <stdio.h>

int main() {
    int T,i,f; 
    printf("donner le nombre d'élément du tableau\n");
    scanf("%d",&T);
    printf("donner le facteur \n");
    scanf("%d",&f);

    int tab[T];
  
        for ( i = 0; i <T; i++)
        {
         printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
    

    for ( i = 0; i < T; i++) {
        m = m * tab[i];
        printf("la  multiplication de tous les valeurs du tab[%d]=%d", T ,m); 
    }

    return 0;
}
// ex 6
