#include <iostream>
#include <string>
#include <locale>
#include <stdlib.h>

#include "Pessoa.h"
using namespace std;

void menu1(){
    cout << "---------------Cadastro---------------" << endl;
    cout << "\n\t(1)- Cadastrar uma pessoa" << endl;
    cout << "\t(2)- Mostrar a pessoa" << endl;
    cout << "\t(3)- Sair" << endl;
    cout << "\nOpção: ";
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1 = Pessoa();
    std::string nome, telefone;
    int opcao, idade;


    while(1){
        menu1();
        cin >> opcao;

        if(opcao == 3){
            break;
        }else if(opcao == 1){
            system("cls");

            cout << "Digite o nome da pessoa a ser cadastrada(Apenas o primeiro nome/ou separados por sublinha): ";
            cin >> nome;
            p1.setNome(nome);

            cout << "Digite a idade da pessoa: ";
            cin >> idade;
            p1.setIdade(idade);

            cout << "Digite o telefone desta pessoa: ";
            cin >> telefone;
            p1.setTelefone(telefone);

            system("cls");
        }else if(opcao == 2){
            system("cls");

            cout << "Nome: " << p1.getNome() << endl;
            cout << "Idade: " << p1.getIdade() << endl;
            cout << "Telefone: " << p1.getTelefone() << endl;

            system("pause");
            system("cls");
        }
    }
    return 0;
}
