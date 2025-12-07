#include <stdio.h>

int main() {
    // Declaração das variáveis
    int voto;
    int candidatoThiago = 0, candidatoWesley = 0, candidatoMurilo = 0;
    
    // Nomes dos candidatos
    char nomeCandidatoThiago[] = "Thiago";
    char nomeCandidatoWesley[] = "Wesley";
    char nomeCandidatoMurilo[] = "Murilo";

    while (1) {
        printf("Digite o número do candidato (1 para Thiago, 2 para Wesley, 3 para Murilo) ou 0 para encerrar: ");
        scanf("%d", &voto);
        
        // Condição para encerrar a votação
        if (voto == 0) {
            break;
        }
        
        // Contagem dos votos
        if (voto == 1) {
            candidatoThiago++;
        } else if (voto == 2) {
            candidatoWesley++;
        } else if (voto == 3) {
            candidatoMurilo++;
        } else {
            printf("Voto inválido. Tente novamente.\n");
        }
    }

    // Exibindo o resultado final com os nomes dos candidatos
    printf("\nO resultado da eleição é:\n");
    printf("%s: %d votos\n", nomeCandidatoThiago, candidatoThiago);
    printf("%s: %d votos\n", nomeCandidatoWesley, candidatoWesley);             
    printf("%s: %d votos\n", nomeCandidatoMurilo, candidatoMurilo);

    return 0;
}

