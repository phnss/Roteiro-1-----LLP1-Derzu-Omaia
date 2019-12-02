#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>

#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

void menu1(){
    cout << "---------------/Agenda de despesas/---------------" << endl;
    cout << "\n\t(1)-Criar uma despesa" << endl;
    cout << "\t(2)-Procurar uma despesa" << endl;
    cout << "\t(3)-Mostar o total do valor das despesas cadastradas" << endl;
    cout << "\t(4)-Sair";
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao=0, i=0, j=0;
    double valor=0;
    string nome;

    Despesa d = Despesa();
    //Despesa d1 = Despesa("Alimentação", 20);

    ControleDeGastos cg;
    //cg.setDespesa(d1, 0);

    while(1){
        menu1();
        cout << "\n\nOpção selecionada: ";
        cin >> opcao;

        if(opcao == 4){
            break;
        }else if(opcao == 1){
            i++;
            system("cls");

            cout << "Qual nome da despesa(utilize apenas um nom/ou separados por sublinha): ";
            cin >> nome;

            cout << "Quanto é seu gasto: ";
            cin >> valor;

            d = Despesa(nome, valor);
            cg.setDespesa(d, i);

            system("cls");

        }else if(opcao == 2){
            system("cls");

            cout << "Qual a despesa que você gostaria de saber se ja esxiste?" << endl;
            cout << "Nome: ";
            cin >> nome;

            cout << "\n" << (cg.existeDespesasDoTipo(nome) ? "True" : "False") << endl;

            system("pause");
            system("cls");

        }else if(opcao == 3){
            system("cls");

            cout << "Total de despesas: " << cg.calculaTotalDeDespesas() << endl;

            system("pause");
            system("cls");
        }
    }

    cout << "Fim." << endl;
    return 0;
}
