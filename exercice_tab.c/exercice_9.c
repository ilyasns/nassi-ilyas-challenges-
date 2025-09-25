#include <stdio.h>

int main() {
    int T,i; 
    printf("donner le nombre delement du tableau\n");
    scanf("%d",&T);

    int tab[T];
    int tab2[T];

        for ( i = 0; i <T; i++)
        {
          printf("give a number tab[%d]\n",i);
          scanf("%d",&tab[i]);
        }
         printf("avant\n");
       for ( i = 0; i < T; i++)
       {
          tab2[T-i] = tab[i];
            printf("|%d|",tab2[i]);
       }
        
    
    return 0;
}
//ex 9