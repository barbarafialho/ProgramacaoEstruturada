#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um nome e imprime uma mensagem na tela

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    cout << "Insira seu nome: ";
    cin >> nome;

    cout << "Meu nome é " << nome << endl;
    cout << "Sou do curso de Sistemas de Informação.\n";
    cout << "Estou no primeiro ano.\n";
    cout << "Gosto de programação!!!\n";

    return 0;
}
