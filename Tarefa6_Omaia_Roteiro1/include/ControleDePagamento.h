#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include <string>

#include "Pagamento.h"

class ControleDePagamento{
    public:
        ControleDePagamento();

        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string funcionario);

    private:
        const static int max = 10;//Atribuição de uma variavel constante para facilitar a troca futuramente
        Pagamento pagamentos[max];
};

#endif // CONTROLEDEPAGAMENTO_H
