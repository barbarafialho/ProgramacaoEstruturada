#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um valor e retorna se � positivo ou negativo (0 incluso)

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    cout << "Insira um valor: ";
    cin >> valor;

    if (valor>=0){
        cout << "O valor � positivo!";
    } else {
        cout << "O valor � negativo!";
    }
    return 0;
}
