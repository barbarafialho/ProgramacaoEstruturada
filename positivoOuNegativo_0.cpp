#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe um valor e retorna se é positivo ou negativo (0 não incluso)

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    cout << "Insira um valor: ";
    cin >> valor;

    if (valor>0){
        cout << "O valor é positivo!";
    } else if (valor<0){
        cout << "O valor é negativo!";
    } else {
        cout << "Zero";
    }
    return 0;
}
