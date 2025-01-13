#include<stdio.h>

int main(){
float salario, prestacao, limite;

     printf("Digite o salário do trabalhador: R$ ");
    scanf("%f", &salario);ssssss

    printf("Digite o valor da prestação do empréstimo: R$ ");
    scanf("%f", &prestacao);
    
    limite = 0.2 * salario;

    if (prestacao > limite) {
        printf("Empréstimo não concedido\n");
    } else {
        printf("Empréstimo concedido\n");
    }

return 0;
}