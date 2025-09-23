#include <stdio.h>
int main()
{
  int a,b,c ;
  printf("donner lepremier cotes ");
  scanf('%d'&a);
   printf("donner duexieme cotes ");
  scanf('%d'&b);
  printf("donner troisieme cotes ");
  scanf('%d'&c);
  if((a+b)=<c){ 
    printf("non triongle");
   else 
   if (a==b)||(a==c)||(b==c){
     printf("le triongle est isocele");
     else if (a==b) && (b==c){ 
       printf("le triongle est equilaterale");
     } else
     
      printf("le triongle estScalène ");
     
   }
    
  }
}