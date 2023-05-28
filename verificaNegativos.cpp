#include <iostream>
#include <locale>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa recebe 15 números e verifica quantos são negativos

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num;
    int cNeg;
    for (int i=0; i<15; i++){
        cout << "Digite um número: ";
        cin >> num;
        if(num<0){
            cNeg += 1;
        }
    }
    cout << "\nQuantidade de números negativos digitados: " << cNeg << endl;
    return 0;
}
