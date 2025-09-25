#include <stdio.h>

int main() {
    int T,j=0; 
    printf("donner le nombre delement du tableau\n");
    scanf("%d",&T);

    int tab[T];
    do{
         printf("give a number\n");
        for ( i = 0; i <T; i++)
        {
          scanf("%d"tab[i]);
        }
        
      J++;
    } while (j<T);
    

    for (int i = 0; i < T; i++) {

        printf("[%d]\n", tab[i]); 
    }

    return 0;
}
// ex 2
