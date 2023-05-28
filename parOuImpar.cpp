#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um valor e retorna se é par ou impar

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor;
    cout << "Insira um valor inteiro positivo: ";
    cin >> valor;

    if (valor%2==0){
        cout << "O valor é par.\n";
    } else {
        cout << "O valor é impar.\n";
    }
    return 0;
}
