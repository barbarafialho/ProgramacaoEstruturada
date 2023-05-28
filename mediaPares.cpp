#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa calcula a média dos números pares digitados

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, contPar;
    float soma, media;

    for (int i=0; i<20; i++) {
        cout << "Digite um valor: ";
        cin >> valor;

        if (valor%2==0){
            soma += valor;
            contPar += 1;
        }
    }

    media = soma/contPar;

    cout << "A média dos números pares digitados foi: " << media << endl;

    return 0;
}
