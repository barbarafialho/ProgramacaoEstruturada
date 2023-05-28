#include <iostream>
#include <locale>
#include <cmath>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe o valor de um raio de um c�rculo e calcula �rea e per�metro

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, area, perimetro;
    char medida[10];

    cout << "Insira o valor do raio de um c�rculo: ";
    cin >> raio;
    cout << "Insira a medida (cm|m|km): ";
    cin >> medida;

    perimetro = 2*M_PI*raio;
    area = M_PI*(pow(raio,2));

    cout << "O valor do per�metro � " << perimetro << medida << endl;
    cout << "O valor da �rea � " << area << medida << endl;
    return 0;
}
