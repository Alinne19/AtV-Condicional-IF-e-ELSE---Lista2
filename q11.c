#include <stdio.h>

int main(){

int A, B;

printf("Digite o valor de A: \n");
scanf("%d", &A);

printf("Digite o valor de B: \n");
scanf("%d", &B);

if (A > B) {
        printf("O maior valor é A: %d\n", A);
        printf("O menor valor é B: %d\n", B);
    } else if (B > A) {
        printf("O maior valor é B: %d\n", B);
        printf("O menor valor é A: %d\n", A);
    } else {
        printf("A e B são iguais: %d\n", A);
    }


    return 0;
}