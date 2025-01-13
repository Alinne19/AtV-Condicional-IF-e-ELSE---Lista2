#include <stdio.h>

int main() {

    int idade;
    float ingresso, desconto;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite o valor do ingresso: \n");
    scanf("%f", &ingresso);

    if (idade > 60) {
        desconto = ingresso * 0.30;  
        ingresso -= desconto; 

        printf("O valor do ingresso com 30%% de desconto  he R$ %.2f\n", ingresso);
    } else {
        desconto = ingresso * 0.10;  
        ingresso -= desconto;  

        printf("O valor do ingresso com 10%% de desconto he R$ %.2f\n", ingresso);
    }

    return 0;
}