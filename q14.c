#include <stdio.h>

int main(){

float altura, pesoideal;
char sexo;

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Qual seu sexo? ( digite m para masulino ou  f para femino) \n");
scanf(" %c", &sexo);

if(sexo== 'm' || sexo == 'M'){
    pesoideal = (72.7 * altura) - 58;

    printf("O peso ideal para um homem com altura %.2f m he: %.2f kg\n", altura, pesoideal);

}else if( sexo == 'f' || sexo == 'F'){
    pesoideal = (62.1 * altura) - 44.7;
    printf("O peso ideal para uma mulher com altura %.2f f é : %.2f kg\n", altura, pesoideal);
}else{
    printf("Sexo ivalido digite f para feminino  ou m para masculino");
}
   return 0;
}