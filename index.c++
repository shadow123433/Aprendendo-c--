#include <iostream> //  Inclui a biblioteca de entrada e saída padrão
using namespace std; // Inclui a biblioteca padrão de entrada e saída
int main() { // Função principal do programa
    float nota1, nota2, nota3, media; // Declaração das variáveis para armazenar as notas e a média
    cout << "Digite a primeira nota: "; // Solicita ao usuário que insira a primeira nota
    cin >> nota1;   // Lê a primeira nota do usuário
    cout << "Digite a segunda nota: "; // Solicita ao usuário que insira a segunda nota
    cin >> nota2; // Solicita ao usuário que insira a segunda nota
    cout << "Digite a terceira nota: "; // Solicita ao usuário que insira três notas
    cin >> nota3; // Lê as três notas do usuário
    media = (nota1 + nota2 + nota3) / 3; // Calcula a média das notas
    cout << "A media das notas e: " << media << endl; // Exibe a média das notas

    return 0; // Indica que o programa terminou com sucesso
}