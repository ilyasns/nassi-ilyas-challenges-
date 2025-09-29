#include<stdio.h>
#include <string.h>
int main(){

    char input[200];
    int num = 0;

    printf("entrer une chaine de caracteres\n");
    gets(input);
    puts(input);
    for (int i = 0; i < 200; i++)
    {
        if (input[i]!=0)
        {
            num++;
        }
        
    }
    printf("la longueur de la chaine est :%d\n"num - 1);

    return 0;

}