#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include <string>
#include "Despesa.h"

class ControleDeGastos{
    public:
        ControleDeGastos();

        double calculaTotalDeDespesas();
        bool existeDespesasDoTipo(std::string t);
        void setDespesa(Despesa d, int pos);

    private:

        const static int max = 10;//Atribuição de uma variavel constante para facilitar a troca futuramente
        Despesa despesas[max];
};

#endif // CONTROLEDEGASTOS_H
