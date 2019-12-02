#include <iostream>
#include <stdlib.h>
#include "Data.h"

using namespace std;

Data::Data(){
    dia = 01;
    mes = 01;
    ano = 2000;

}

Data::avancarDia(){
    dia++;

    if(mes == 1 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 2 && dia == 29){
        mes++;
        dia = 1;
    }else if(mes == 3 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 4 && dia == 31){
        mes++;
        dia = 1;
    }else if(mes == 5 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 6 && dia == 31){
        mes++;
        dia = 1;
    }else if(mes == 7 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 8 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 9 && dia == 31){
        mes++;
        dia = 1;
    }else if(mes == 10 && dia == 32){
        mes++;
        dia = 1;
    }else if(mes == 11 && dia == 31){
        mes++;
        dia = 1;
    }else if(mes == 12 && dia == 32){
        mes++;
        dia = 1;
    }

    if(mes == 13){
        dia = 1;
        mes = 1;
        ano++;
    }
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

int Data::setDia(){

    while(1){
        cout << "Informe o novo dia: ";
        cin >> dia;

        if(mes == 1 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 2 && dia > 28){
            cout << "Informação invalída." << endl;

        }else if(mes == 3 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 4 && dia > 30){
            cout << "Informação invalída." << endl;

        }else if(mes == 5 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 6 && dia > 30){
            cout << "Informação invalída." << endl;

        }else if(mes == 7 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 8 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 9 && dia > 30){
            cout << "Informação invalída." << endl;

        }else if(mes == 10 && dia > 31){
            cout << "Informação invalída." << endl;

        }else if(mes == 11 && dia > 30){
            cout << "Informação invalída." << endl;

        }else if(mes == 12 && dia > 31){
            cout << "Informação invalída." << endl;

        }else{
            break;
        }

        system("pause");
        system("cls");
    }
}

int Data::setMes(){
    while(1){
        cout << "Informe o novo mes: ";
        cin >> mes;

        if(mes > 12){
            cout << "Informação invalída." << endl;

        }else{
            break;
        }

        system("pause");
        system("cls");
    }
}

int Data::setAno(){
    cout << "Informe o novo ano: ";
    cin >> ano;
}
