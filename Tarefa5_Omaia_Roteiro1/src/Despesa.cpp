#include <iostream>
#include "Despesa.h"

using namespace std;

Despesa::Despesa(){
    valor = 0;
}

Despesa::Despesa(std::string t, double v){
    setTipoDespesa(t);
    setvalor(v);
}

std::string Despesa::getTipoDespesa(){
    return tipoDespesa;
}

double Despesa::getValor(){
    return valor;
}

void Despesa::setTipoDespesa(std::string t){
    if(t.size() > 3){
        tipoDespesa = t;
    }else{
        cout << "Tipo Inválido: " << t;
    }
}

void Despesa::setvalor(double v){
    if(v >= 0){
        valor = v;
    }
}
