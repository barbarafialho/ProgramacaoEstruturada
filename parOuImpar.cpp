#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um valor e retorna se � par ou impar

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor;
    cout << "Insira um valor inteiro positivo: ";
    cin >> valor;

    if (valor%2==0){
        cout << "O valor � par.\n";
    } else {
        cout << "O valor � impar.\n";
    }
    return 0;
}
