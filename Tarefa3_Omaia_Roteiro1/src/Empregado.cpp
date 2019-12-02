#include "Empregado.h"

Empregado::Empregado(){
    nome = " ";
    sobrenome = " ";
    salario = 0.0;
}

Empregado::Empregado(std::string n, std::string sn, double s){
    nome = n;
    sobrenome = sn;
    salario = s;
}

void Empregado::setNome(std::string n){
    nome = n;
}

void Empregado::setSobrenome(std::string sn){
    sobrenome = sn;
}

void Empregado::setSalario(double s){
    if(s >= 0){
        salario = 0;
    }
}

std::string Empregado::getNome(){
    return nome;
}
std::string Empregado::getSobrenome(){
    return sobrenome;
}
double Empregado::getSalario(){
    return salario;
}
