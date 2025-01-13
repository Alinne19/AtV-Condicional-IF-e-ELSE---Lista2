#include<stdio.h>

int main(){

float n1,n2, n3;
float media;

printf("Digite as 03 notas do aluno:\n");
scanf("%f %f %f", &n1, &n2, &n3);

media = (n1*1 + n2*1 +n3*2 )/4;

printf(" A media do aluno he %.2f", media);

if(media>= 60){
    printf("Aluno aprovado!\n");
}else{

    printf("Aluno Reprovado!\n");
}
    return 0;
}