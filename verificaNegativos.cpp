#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe 15 n�meros e verifica quantos s�o negativos

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num;
    int cNeg;
    for (int i=0; i<15; i++){
        cout << "Digite um n�mero: ";
        cin >> num;
        if(num<0){
            cNeg += 1;
        }
    }
    cout << "\nQuantidade de n�meros negativos digitados: " << cNeg << endl;
    return 0;
}
