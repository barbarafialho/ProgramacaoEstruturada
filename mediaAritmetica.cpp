#include <iostream>
#include <locale>
#include <iomanip>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa média aritmética de 20 valores inteiros positivos

using namespace std;

int main()
{
    int valor;
    float soma, media;
    setlocale(LC_ALL, "Portuguese");

    for (int i=0; i<20; i++){
        cout << "Digite um valor inteiro positivo: ";
        cin >> valor;
        soma += valor;
    }
    media = soma/20;
    cout << fixed << setprecision(2);
    cout << "\nA média calculada foi: " << media << endl;
}
