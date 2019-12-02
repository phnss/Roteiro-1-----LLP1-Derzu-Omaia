#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>
#include <stdio.h>

#include "Invoice.h"

using namespace std;

void menu1(){
    cout << "-----------Fatura-----------" << endl;
    cout << "\n(1)- Produtos" << endl;
    cout << "(2)- Sair\n" << endl;
    cout << "Opção: ";
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    Invoice produto;

    while(1){
        menu1();
        cin >> opcao;

        if(opcao == 2){
            break;

        }else if(opcao == 1){
            system("cls");

            produto.setNumero();
            produto.setDescricao();
            produto.setPreco();
            produto.setQuantidade();

            cout << "\n\nO produto de número " << produto.getNumero();
            cout << ", com a descrição: /" << produto.getDescricao();
            cout << "/.\nFoi comprado " << produto.getQuantidade() << " unidade(s) deste item";
            cout << ", de valor por unidade de " << produto.getPreco();
            cout << "$. \nO valor total gasto foi de "<< produto.getInvoiceAmount() << endl;


            system("pause");
            system("cls");
        }
    }

    return 0;
}
