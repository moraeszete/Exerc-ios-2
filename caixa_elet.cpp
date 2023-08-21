#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Suponha que um caixa eletrônico disponha apenas de notas de 1, 10 e 50
reais. Considerando que o cliente está querendo fazer um saque de um valor
qualquer (considere esse valor inteiro). Faça um programa em C que mostre
o número mínimo de notas que o caixa deve fornecer para o cliente. Mostre
também, o valor do saque, e a quantidade de cada nota a ser entregue. Obs:
O caixa não trabalha com moedas.*/

// %
int main(){
    int V;

    printf("Valor de saque:");
    scanf("%d", &V);
    
    if (V % 50 ){
         V= V/50 ;
        printf ("A quantidade de notas é %d", V);
        if (V % 10 ){
            V= V/10 ;
          printf ("A quantidade de notas é %d", V);
        }
        if (V % 1 ){
            V= V/1 ;
          printf ("A quantidade de notas é %d", V);
        }
    else{
        printf("Valor não é possível de ser sacado?");
    }
    
   }
}
