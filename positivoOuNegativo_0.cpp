#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um valor e retorna se � positivo ou negativo (0 n�o incluso)

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    cout << "Insira um valor: ";
    cin >> valor;

    if (valor>0){
        cout << "O valor � positivo!";
    } else if (valor<0){
        cout << "O valor � negativo!";
    } else {
        cout << "Zero";
    }
    return 0;
}
