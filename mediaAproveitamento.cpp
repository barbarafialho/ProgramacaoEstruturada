#include <iostream>
#include <locale>
#include <iomanip>
#include <string.h>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe a matricula e notas de um aluno e calcula a média de aproveitamento.

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nMatricula[10], situacao[10], conceito;
    float n1, n2, n3, mediaA;
    cout << "Nº MATRÍCULA: ";
    cin >> nMatricula;
    cout << "Nota da atividade 1 (1 a 10): ";
    cin >> n1;
    cout << "Nota da atividade 2 (1 a 10): ";
    cin >> n2;
    cout << "Nota da atividade 3 (1 a 10): ";
    cin >> n3;

    mediaA = (n1+n2*2+n3*3)/6;

    if (mediaA>=9){
        conceito = 'A';
        strcpy(situacao, "Aprovado.");
    } else if (mediaA>=7.5 || mediaA<9){
        conceito = 'B';
        strcpy(situacao, "Aprovado.");
    } else if (mediaA>=6 || mediaA<7.5){
        conceito = 'C';
        strcpy(situacao, "Aprovado.");
    } else if (mediaA>=4 || mediaA<6){
        conceito = 'D';
        strcpy(situacao, "Reprovado.");
    } else {
        conceito = 'E';
        strcpy(situacao, "Reprovado.");
    }

    cout << fixed << setprecision(2);
    cout << "\n\nMatrícula: " << nMatricula;
    cout << "\nNotas das atividades 1 2 e 3: " << n1 << " | " << n2 << " | " << n3;
    cout << "\nMédia de aproveitamento: " << mediaA;
    cout << "\nConceito: " << conceito;
    cout << "\nSituação do aluno(a): " << situacao << endl;

    return 0;
}
