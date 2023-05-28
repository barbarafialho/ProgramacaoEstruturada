#include <iostream>
#include <locale>
#include <iomanip>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe o nome e valor de um produto e calcula um desconto de 13%

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[10];
    float valor, desconto, valorFinal;
    cout << "Nome do produto: ";
    cin >> nome;
    cout << "Valor do produto: ";
    cin >> valor;

    desconto = valor*0.13;
    valorFinal = valor - desconto;

    cout << fixed << setprecision(2);
    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor final: " << valorFinal << endl;

    return 0;
}
