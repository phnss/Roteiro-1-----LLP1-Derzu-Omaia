#include "Pagamento.h"

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeDoFuncionario = " ";
}

Pagamento::Pagamento(std::string n, double v){
    setValorPagamento(v);
    setNomeDoFuncionario(n);
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valor){
    valorPagamento = valor;
}

void Pagamento::setNomeDoFuncionario(std::string nome){
    nomeDoFuncionario = nome;
}

