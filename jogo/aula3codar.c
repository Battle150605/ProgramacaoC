#include <stdio.h>

int main(){
    int idade , matricula;
    float altura;
    char nome[20];

    printf("digite sua Idade:\n");
    scanf("%d", &idade);
    printf("digite sua Altura\n");
    scanf("%f" , &altura);
    printf("Qual seu nome?\n");
    scanf("%s" , &nome);
    printf("digite sua matricula:\n");
    scanf("%d" , &matricula);

    printf("Nome do Aluno: %s - Matricula: %d\n" , nome , matricula);
    printf("Idade: %d - Altura: %f" , idade , altura);
    return 0;
}