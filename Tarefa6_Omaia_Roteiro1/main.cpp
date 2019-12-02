#include <iostream>
#include <locale>

#include "Pagamento.h"
#include "ControleDePagamento.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    ControleDePagamento pag;

    Pagamento p1 = Pagamento("Adailson Santos", 500.00);
    Pagamento p2 = Pagamento("Fernandes Montes", 1000.50);

    pag.setPagamentos(p1, 0);
    pag.setPagamentos(p2, 1);

    cout << "Pagamento 1 - Nome do Funcionário: " << p1.getNomeDoFuncionario() <<  " /Valor a ser pago: " << p1.getValorPagamento() << endl;
    cout << "Pagamento 2 - Nome do Funcionário: " << p2.getNomeDoFuncionario() <<  " /Valor a ser pago: " << p2.getValorPagamento() << endl << endl;

    cout << "Existe um tipo de pagamento de Fernandes Montes cadastrado: ";
    if(pag.existePagamentoParaFuncionario("Fernandes Montes")){
        cout << "Existe" << endl;
    }else{
        cout << "Não existe" << endl;
    }

    cout << "Existe um tipo de pagamento de Cardoso cadastrado: ";
    if(pag.existePagamentoParaFuncionario("Cardoso")){
        cout << "Existe" << endl;
    }else{
        cout << "Não existe" << endl;
    }

    cout << "\nO total das despesas é: " << pag.calculaTotalDePagamentos() << endl;

    return 0;
}
