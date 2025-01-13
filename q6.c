#include <stdio.h>

int main (){

float velocidade, multa,  excesso;

printf(" Digite a velocidade do veiculo: \n");
scanf("%f", &velocidade);

if( velocidade>80){

    excesso = velocidade - 80;
    multa= excesso * 5 ;

printf(" O total da multa  he %.2f", multa);
 
}else{

    printf("Dentro do limite de velocidade");
}

    return 0;
}