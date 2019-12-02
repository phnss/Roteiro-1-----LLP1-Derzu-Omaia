#include <string>
#include <iostream>
#include "ControleDePagamento.h"


ControleDePagamento::ControleDePagamento(){

}

void ControleDePagamento::setPagamentos(Pagamento p, int pos){
    pagamentos[pos] = p;
}

double ControleDePagamento::calculaTotalDePagamentos(){
    double total = 0;

    for(int i=0;i<10;i++){
            total += pagamentos[i].getValorPagamento();
    }

    return total;
}

bool ControleDePagamento::existePagamentoParaFuncionario (std::string funcionario){
    for(int i=0;i<10;i++){
        if(pagamentos[i].getNomeDoFuncionario() == funcionario){
            return true;
        }
    }
    return false;
}
