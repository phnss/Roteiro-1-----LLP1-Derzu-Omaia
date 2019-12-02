#include <iostream>
#include <locale>
#include "Empregado.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    Empregado e1 = Empregado("Pedro", "Henrique", 500.0);
    Empregado e2 = Empregado("Pietro", "Nogueira", 1000.0);

    cout << "-------------Empregado 1-------------\n" << endl;
    cout << "\tNome:" << e1.getNome() << " " << e1.getSobrenome() << endl;
    cout << "\tSalário: " << e1.getSalario() << endl;

    cout << "\n\tSalario anual: " << e1.getSalario() * 12 << endl;

    cout << "\n-------------Empregado 2-------------\n" << endl;
    cout << "\tNome:" << e2.getNome() << " " << e2.getSobrenome() << endl;
    cout << "\tSalário: " << e2.getSalario() << endl;

    cout << "\n\tSalario anual: " << e2.getSalario() * 12 << endl;

    cout << "\nApós a remodelações nos salários, havendo o aumento de 10%:\n" << endl;

    cout << "\tEmpregado nnúmero 1: salário anual novo = " << (e1.getSalario() * 0.1 + e1.getSalario()) * 12 << endl;
    cout << "\tEmpregado nnúmero 2: salário anual novo = " << (e2.getSalario() * 0.1 + e2.getSalario()) * 12 << endl;

    return 0;
}
