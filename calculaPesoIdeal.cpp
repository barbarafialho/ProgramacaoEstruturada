#include <iostream>
#include <locale>
#include <string.h>
#include <iomanip>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe a altura e o sexo e calcula o peso ideal

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, pesoIdeal;
    char sexo, sexoPorExtenso[50];

    cout << "Altura (ex: 1.75): ";
    cin >> altura;
    cout << "Sexo (M ou F): ";
    cin >> sexo;
    sexo = toupper(sexo);

    if (sexo=='M' || sexo=='F'){
        if (sexo=='M'){
            pesoIdeal = (72.7*altura)-58;
            strcpy(sexoPorExtenso, "Masculino");
        } else {
            pesoIdeal = (62.1*altura)-44.7;
            strcpy(sexoPorExtenso, "Feminino");
        }
        cout << fixed << setprecision(2);
        cout << "\nAltura: " << altura << "\nSexo: " << sexoPorExtenso << "\nPeso ideal: " << pesoIdeal << " kg.\n";
    } else {
        cout << "Sexo não identificado.\n";
    }

    return 0;
}
