#include <stdio.h>

int main() {
    int T,i; 
    int min;
    printf("donner le nombre delement du tableau\n");
    scanf("%d",&T);

    int tab[T];
  
        for ( i = 0; i <T; i++)
        {
         printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
    

    for ( i = 0; i < T; i++) {
        max = tab [0];
        if ( min < tab[i]){
            min = tab [i];
        }
    
    }
 printf("la  valeure min du tab[%d]est:%d", T ,min); 
    return 0;
}
// ex 5
