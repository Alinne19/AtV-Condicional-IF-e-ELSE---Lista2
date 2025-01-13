#include <stdio.h>

int main (){

int A, B, C, D;
int maior, menor;

printf ("Digite o valor para A: \n");
scanf("%d",&A);

printf ("Digite o valor para B: \n");
scanf("%d",&B);

printf ("Digite o valor para C: \n");
scanf("%d",&C);

printf ("Digite o valor para D: \n");
scanf("%d",&D);

maior =  A;
menor = A;

if( B> maior){
    maior = B;
}
if(C > maior){
    maior = C;
}
if (D> maior){
    maior= D;
}

if(B< menor){
    menor= B;
}
if(C< menor){
    menor=C;
}
if( D< menor){
    menor =D;
}

printf("O maior valor he %d\n", maior);
printf("O menor valor he %d\n", menor);

    return 0;
}