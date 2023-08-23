#include <stdio.h>
#include <stdlib.h>
  /*Suponha que um caixa eletrônico disponha apenas de notas de 1, 10 e 50
  reais. Considerando que o cliente está querendo fazer um saque de um valor
  qualquer (considere esse valor inteiro). Faça um programa em C que mostre
  o número mínimo de notas que o caixa deve fornecer para o cliente. Mostre
  também, o valor do saque, e a quantidade de cada nota a ser entregue. Obs:
  O caixa não trabalha com moedas.*/

// %
int main(){
    int saque;

    printf("Valor de saque:");
    scanf("%d", &saque);

    int notas50 = saque / 50;
    int valorRestante = saque % 50;

    int notas10 = valorRestante / 10;
    valorRestante = valorRestante % 10;

    int notas1 = valorRestante;

    printf("Valor do saque: %d\n", saque);
    printf("%d notas de 50 reais \n", notas50);
    printf("%d notas de 10 reais \n", notas10);
    printf("%d notas de 1 real \n", notas1);

    return 0;
}