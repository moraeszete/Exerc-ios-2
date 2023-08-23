#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[3];

    printf("Insira 3 numero: \n");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    if (num[0] > num[1] && num[2]){
     printf("O numero maior e: %d", num[0]);

    }else if(num[1] > num[0] && num[2]){
    printf("O numero maior e: %d", num[1]);

    }else{
    printf("O numero maior e: %d", num[2]);
    }
}