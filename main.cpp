#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, media;

    // Leitura das notas dos três alunos
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;

    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;

    cout << "Digite a terceira nota do aluno: ";
    cin >> nota3;

    // Calculando a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibindo o resultado
    cout << "A média das notas do aluno é: " << media << endl;

    return 0;
}
