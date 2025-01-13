#include <stdio.h>
#include <string.h>

int main() {
    float compra;
    char pagamento[4]; 

    
    printf("Digite o valor da compra: \n");
    scanf("%f", &compra);

    
    printf("O pagamento e a vista? (sim/nao): \n");
    scanf("%s", pagamento);

   
    if (compra > 500 && (strcmp(pagamento, "sim") == 0 || strcmp(pagamento, "SIM") == 0)) {
        printf("Tem direito a desconto\n");
    } else {
        printf("Sem desconto\n");
    }

    return 0;
}
