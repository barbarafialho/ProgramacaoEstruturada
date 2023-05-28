#include <iostream>
#include <locale>
#include <iomanip>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa faz uma pesquisa para a prefeitura e mostra a m�dia de filhos, de sal�rio e o maior sal�rio

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, maiorSalario, somaSalario, somaFilhos;
    int nFilhos;
    cout << "***PESQUISA DE HABITANTES*** " << endl;
    for (int i=0;i<15;i++){
        cout << "\nHabitante " << i+1 << "\nInforme seu sal�rio (ex: 1320.00): ";
        cin >> salario;
        cout << "N�mero de filhos: ";
        cin >> nFilhos;
        somaSalario += salario;
        somaFilhos += nFilhos;
        if (salario>maiorSalario){
            maiorSalario = salario;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n\nM�dia do sal�rio da popula��o: " << somaSalario/15 << endl;
    cout << "M�dia do n�mero de filhos da popula��o: " << somaFilhos/15 << endl;
    cout << "Maior sal�rio dentre os pesquisados: " << maiorSalario << endl;

    return 0;
}
