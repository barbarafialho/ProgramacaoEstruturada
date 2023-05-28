#include <iostream>
#include <locale>
#include <iomanip>

// Aluna: Barbara Amanda Fialho de Souza
// Esse programa faz uma pesquisa para a prefeitura e mostra a média de filhos, de salário e o maior salário

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, maiorSalario, somaSalario, somaFilhos;
    int nFilhos;
    cout << "***PESQUISA DE HABITANTES*** " << endl;
    for (int i=0;i<15;i++){
        cout << "\nHabitante " << i+1 << "\nInforme seu salário (ex: 1320.00): ";
        cin >> salario;
        cout << "Número de filhos: ";
        cin >> nFilhos;
        somaSalario += salario;
        somaFilhos += nFilhos;
        if (salario>maiorSalario){
            maiorSalario = salario;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n\nMédia do salário da população: " << somaSalario/15 << endl;
    cout << "Média do número de filhos da população: " << somaFilhos/15 << endl;
    cout << "Maior salário dentre os pesquisados: " << maiorSalario << endl;

    return 0;
}
