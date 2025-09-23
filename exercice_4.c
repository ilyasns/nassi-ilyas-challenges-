#include <stdio.h>
int main(){
  int note ;
  char x;
  printf("donner la note");
  scanf("%d",&note);
 if (note<9){
   
   }else if( (note <=12)&&(note>=10)){
 
      printf ("echec");
   }
    else if( (note <=15)&&(note>=13)){
 
      printf (" asser bien");
      
    }
    else if( (note <=18)&&(note>=16)){
    
      printf ("bien");
    }
     else if( (note <=20)&&(note>=19)){

      printf ("exllent");
   }
 return 0;
}