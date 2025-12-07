#include <stdio.h>

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, media;

    // Leitura das notas dos três alunos
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    // Calculando a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibindo o resultado
    printf("A média das notas do aluno é: %.2f\n", media);

    return 0;
}