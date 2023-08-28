#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, y; 

    printf("Quanto tempo de empresa o colaborador tem, em anos: ");
    scanf("%f", &y);

    printf("Qual o saláro do colaborador: \n");
    scanf("%f", &salario);
    
    /*A empresa XKW concedeu um bônus de 20% do valor do salário a todos os
funcionários com tempo de trabalho na empresa igual ou superior a 5 anos e
de 10% aos demais.*/
if (y >= 5 ){ 
    salario = salario + (salario * 0.2);
    printf("A empresa XKW deve pagar R$%0.2f\nCom um bonus de 20 porcento", salario);    
    }else{
        salario = salario +(salario * 0.1);
        printf("A empresa XKW deve pagar: R$%0.2f\nCom um bonus de 10 porcento", salario);  
    } 
}
