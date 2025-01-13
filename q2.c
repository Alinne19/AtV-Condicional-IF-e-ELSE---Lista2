#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

int numero;

printf("Digite um numero\n");
scanf("%d", & numero);

if(numero> 10 && numero %5==0){

    printf("Maior que 10 e divisível por 5");
} else{
    printf("Nao atende às condições");
}

    return(0);
}