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
         printf("avant\n");
       for ( i = 0; i < T; i++)
      
       {
        
        printf("|%d|",tab[i]);
       }
       int nbr;
        do
        {
            nbr = 0;
            for ( i = 0; i <T - 1; i++)
            {
                if (tab[i]> tab[i+1])
                {
                   int temp = tab[i];
                   tab[i] = tab[i+1];
                   tab[i + 1] = temp ;
                   nbr++;
                }
                
            }
            
          
            
        } while ( nbr != 0);
        printf("apres\n");
        for ( i = 0; i < T; i++)
      
       {
        
        printf("|%d|",tab[i]);
       }

    return 0;
}
//ex 7