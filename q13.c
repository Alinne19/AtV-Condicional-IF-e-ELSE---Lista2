#include<stdio.h>
#include <math.h>

int main (){

float numero;

printf("Digite um numero real: \n");
scanf("%f",&numero);

if(numero>0){
  
   printf("A raiz quadrada de %.2f he %.2f\n", numero, sqrt(numero));

}else{
   
    printf("O número ao quadrado he %.2f\n", numero * numero);
}

   return 0;
}