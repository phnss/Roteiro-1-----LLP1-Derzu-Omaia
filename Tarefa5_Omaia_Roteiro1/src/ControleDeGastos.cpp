#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){

}

double ControleDeGastos::calculaTotalDeDespesas(){
    double total = 0;

    for(int i=0; i<max; i++){
        total += despesas[i].getValor();//Pegar� os valores do vetor despesas no indice indicado e far� a soma deles.
    }

    /*for (Despesa d : despesas){
        total += total + d.getValor;
    }
    *///Ent�o, � um for each, que percorre o vetor despesas[] e adicionar� o valor encontrado � variavel d que � tempor�ria;
      //Necessita do compilador mais atualizado para roda-lo C++11;
    return total;
}

bool ControleDeGastos::existeDespesasDoTipo(std::string t){

    for(int i=0; i<max; i++){
        if(despesas[i].getTipoDespesa() == t)
            return true;
    }

    return false;

    /*for(Despesa d : despesas){
        if(d.getTipoDespesa() == t){
            return true;
        }
    }
    return false;*/
}


void ControleDeGastos::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}
