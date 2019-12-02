#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento{
    public:
        Pagamento();
        Pagamento(std::string n, double v);

        double getValorPagamento();
        std::string getNomeDoFuncionario();

        void setValorPagamento(double valor);
        void setNomeDoFuncionario(std::string nome);

    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
