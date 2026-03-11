#include <stdio.h>
 float nota1, nota2, media;
 int main() {
    printf("Calculadora de media");
    printf(" Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Sua media: %f" , media);
    return 0;
 }