#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("Maior de idade");

    }else{
        printf("Menor de Idade");
    }
}