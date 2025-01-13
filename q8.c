int main(){

float nota1, nota2, nota3, media;

printf("digite as duas notas do aluno: \n ");
scanf("%f %f", &nota1, &nota2);

media = (nota1 + nota2) / 2;

    if(media >= 7){

    printf("Aprovado\n");
    } else{

    printf("Digite  a prova adicional do aluno: \n");
    scanf("%f", &nota3);

    media= (nota1 + nota2 + nota3) / 3;

        if(media >= 5){

    printf("Aprovado com recuperacao");
}else{

    printf("Reprovado\n");
}
}

    return 0;
}
