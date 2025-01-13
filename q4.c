#include <stdio.h>

    int main(){

        int numero;

        printf("Digite um numero inteiro: \n");
        scanf("%d", &numero);

        if(numero % 2==0){

            numero = (numero*2);
            printf( " O numero eh par e seu dobro eh %d\n",numero);
        }else{

            numero= (numero * 3);
            printf(" O numero eh  impar e seu triplo eh %d\n",numero);
        }

        return 0;
    }