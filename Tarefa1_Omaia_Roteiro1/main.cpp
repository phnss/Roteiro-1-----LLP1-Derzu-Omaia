#include <iostream>
#include <stdlib.h>
#include <locale>
#include "Data.h"


using namespace std;

int main()
{
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    Data data = Data();//Classe = Data/Objeto = data;

    while(1){
        cout << "Hoje: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

        cout << "\nGostaria de fazer o que? \n";
        cout << "(1)-avançar o dia" << endl;
        cout << "(2)-mudar a data" << endl;
        cout << "(3)-sair" << endl;

        cout << "\nEscolha: ";
        cin >> opcao;

        if(opcao == 3){
            break;
        }else if (opcao == 1){
            data.avancarDia();
            system("cls");

        }else if (opcao == 2){
            while(1){
                system("cls");
                cout << "Gostaria de mudar o que?" << endl;
                cout << "(1)-Dia" << endl;
                cout << "(2)-Mes" << endl;
                cout << "(3)-Ano" << endl;
                cout << "(4)-Sair" << endl;
                cout << "\nEscolha: ";
                cin >> opcao;

                if(opcao == 4){
                    break;
                }else if(opcao == 1){
                    system("cls");
                    cout << "informe o novo valor para dia: " << endl;
                    data.setDia();
                    break;

                }else if(opcao == 2){
                    system("cls");
                    cout << "informe o novo valor para mês: " << endl;
                    data.setMes();
                    break;

                }else if(opcao == 3){
                    system("cls");
                    cout << "informe o novo valor para ano: " << endl;
                    data.setAno();
                    break;
                }
            }
        }

        system("cls");
    }

    cout<<"\nAdeus meu jovem usuário";
    return 0;
}
