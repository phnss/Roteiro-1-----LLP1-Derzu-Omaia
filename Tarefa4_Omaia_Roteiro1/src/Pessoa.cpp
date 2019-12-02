#include <string>
#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "";
    idade = 0;
    telefone = "";
}

Pessoa::Pessoa(std::string n, int i, std::string t){
    nome = n;
    idade = i;
    telefone = t;
}

std::string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(std::string n){
    nome = n;
}

void Pessoa::setIdade(int i){
    idade = i;
}

void Pessoa::setTelefone(std::string t){
    telefone = t;
}
