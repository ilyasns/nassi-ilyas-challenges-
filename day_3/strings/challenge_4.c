#include<stdio.h>
#include <string.h>
int main(){

    char input[100];
    char input2[100];



    printf("entrer une chaine de caracteres\n");
    gets(input);
    printf("entrer une chaine de caracteres\n");
    gets(input2);
    printf("%d",strcmp(input,input2));
    if (strcmp(input,input2)==0)
    {
        printf("le deux chaines sont egales");
    }
    else
    {
        printf("les deux chaines sont different");
    }

    return 0;

}