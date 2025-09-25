#include <stdio.h>

int main() {
    int T,i; 
    printf("donner le nombre delement du tableau\n");
    scanf("%d",&T);

    int tab[T];

    for ( i = 0; i <T; i++)
        {
            printf("give a number tab[%d]\n",i);
            scanf("%d",&tab[i]);
        }
     printf("tableau 1\n");
    for ( i = 0; i < T; i++)
       {
            printf("|%d|",tab[i]);
       }
    int tab2[T];
    printf("tableau 2\n");
    for ( i = 0; i < T; i++)
    {
        tab2[i] = tab[i];
        printf("|%d|",tab2[i]);
    }
    
      

    return 0;
}
//ex 8