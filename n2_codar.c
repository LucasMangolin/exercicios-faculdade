#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Digite a matricula do aluno:");
    scanf("%d", &matricula);

    printf("Cadastro do Aluno:\nNome: %s \nIdade: %d \nAltura: %f \nMatricula: %d \n", nome, idade, altura, matricula);
}

