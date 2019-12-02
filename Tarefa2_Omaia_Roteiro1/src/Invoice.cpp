#include <iostream>
#include <stdlib.h>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){
    numero = 0;
    quantidade = 0;
    preco = 0.0;
    descricao = " ";
}

int Invoice::getNumero(){
    return numero;
}

int Invoice::getQuantidade(){
    return quantidade;
}

float Invoice::getPreco(){
    return preco;
}

std::string Invoice::getDescricao(){
    return descricao;
}

float Invoice::getInvoiceAmount(){
    float amount;

    amount = quantidade * preco;

    if(amount <= 0){
        amount = 0;
    }

    return amount;
}

void Invoice::setNumero(){
    cout << "Informe qual o número do produto: ";
    cin >> numero;
}

void Invoice::setQuantidade(){
    cout << "Informe a quantidade de comprada do produto: ";
    cin >> quantidade;
}

void Invoice::setPreco(){
    cout << "Informe o preço do produto: ";
    cin >> preco;

}

void Invoice::setDescricao(){
    cout << "Informe qual vai ser a descrição do produto(1 Palavra): ";
    cin >> descricao;

}



