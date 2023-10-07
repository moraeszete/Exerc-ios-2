/*Implemente um código em C para aprovar empréstimo bancário. O
código deve pedir 3 informações: valor do empréstimo, número de parcelas e
salário do solicitante. Aprovar empréstimo caso o valor das parcelas
representem no máximo 30% do salário do solicitante*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 float Vempre, parc, Ss, Vparc;

printf("Valor do emprestimo: ");
scanf("%f", &Vempre);

printf("Numero de parcelas: ");
scanf("%f", &parc);

printf("Salario do solicitante: ");
scanf("%f", &Ss);

Vparc = Vempre/parc;
//Vparc = 0.3 * Ss;
    if (Vparc <= 0.3 * Ss){
    printf("O emprestimo feito de %0.1f, em %0.0f vezes.\n",Vempre, parc);
    printf("Valor das parcelas a serem pagas será de: %0.2f\n", Vparc);
    printf("Solicitação aprovada!");

    }else{
        printf("Solicitação Reprovada!\nO Solicitante não possui um salário compatível");
    }
}