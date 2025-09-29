#include<stdio.h>
#include <string.h>
int main(){

    char input[100];
    char input2[100];
    char total[200];
    int num = 0;


    printf("entrer une chaine de caracteres\n");
    gets(input);
    printf("entrer une chaine de caracteres\n");
    gets(input2);
    num = strlen(input);
    total= strcat(input,input2);
    gets(total);

    return 0;

}