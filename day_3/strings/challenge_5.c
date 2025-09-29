#include<stdio.h>
#include <string.h>
int main(){

char input[];

printf("entrer une chaine de caracteres\n");
gets(input);
puts(input);
printf("reversed:%s\n",strrev(input));
return 0;
}