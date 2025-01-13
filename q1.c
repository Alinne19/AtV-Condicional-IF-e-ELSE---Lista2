#include <stdio.h>

int main(){

float altura, peso, imc;

printf("Digite seu peso: \n");
scanf("%f",&peso);

printf("Digite sua altura: \n");
scanf("%f",&altura);

imc= peso/ (altura * altura);

printf("Seu IMC he: %.2f\n", imc);

if (imc > 18.5  && imc < 24.9){
    
    printf(" Peso normal\n");

    }else{
        
        printf("Fora do peso normal\n");
}

    return(0);
}