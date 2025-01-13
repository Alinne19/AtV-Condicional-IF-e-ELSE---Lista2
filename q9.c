#include <stdio.h>

int main(){
int numero1, numero2, soma;

printf("Digite dois numero: \n");
scanf("%d %d", &numero1, &numero2);

soma= numero1+ numero2;

if(soma> 20){

    soma+=8;

    printf("o total eh %d\n",soma);
}else{

    soma-=5;
    
     printf("o total eh %d\n",soma);
}


    return 0;
}
