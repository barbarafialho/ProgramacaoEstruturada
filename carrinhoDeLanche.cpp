#include <iostream>
#include <locale>
#include <iomanip>
#include <stdlib.h>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa calcula o valor do pedido no carrinho de lanche

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int code, quant;
    float valor;

    cout << setw(10) << "ITEM" << setw(18) << "CÓDIGO" << setw(10) << "PREÇO" << endl;
    cout << "Cachorro quente" << setw(12) << "100" << setw(10) << "9.20" << endl;
    cout << "Bauru simples" << setw(14) << "101" << setw(10) << "12.00" << endl;
    cout << "Bauru com ovo" << setw(14) << "102" << setw(10) << "13.00" << endl;
    cout << "Hamburger" << setw(18) << "103" << setw(10) << "10.00" << endl;
    cout << "Cheeseburguer" << setw(14) << "104" << setw(10) << "12.00" << endl;
    cout << "Refrigerante Lata" << setw(10) << "105" << setw(10) << "5.00" << endl;
    cout << "Água" << setw(23) << "106" << setw(10) << "3.00" << endl;

    cout << "Insira o código do pedido: ";
    cin >> code;

    if (code>=100 && code<=106){
        cout << "Quantidade do item: ";
        cin >> quant;

        switch(code){
        case 100:
            valor = quant * 9.2;
        break;
        case 101:
            valor = quant * 12;
        break;
        case 102:
            valor = quant * 13;
        break;
        case 103:
            valor = quant * 10;
        break;
        case 104:
            valor = quant * 12;
        break;
        case 105:
            valor = quant * 5;
        break;
        case 106:
            valor = quant * 3;
        break;
        default:
            cout << "Código inválido.\n";
        }
        cout << "VALOR TOTAL:  R$" << valor << " REAIS." << endl;
    } else {
        cout << "Código inválido.\n";
    }

    return 0;
}
