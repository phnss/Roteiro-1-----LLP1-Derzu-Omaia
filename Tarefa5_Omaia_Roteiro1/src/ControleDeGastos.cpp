#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){

}

double ControleDeGastos::calculaTotalDeDespesas(){
    double total = 0;

    for(int i=0; i<max; i++){
        total += despesas[i].getValor();//Pegará os valores do vetor despesas no indice indicado e fará a soma deles.
    }

    /*for (Despesa d : despesas){
        total += total + d.getValor;
    }
    *///Então, é um for each, que percorre o vetor despesas[] e adicionará o valor encontrado á variavel d que é temporária;
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
