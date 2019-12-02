#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa{
    public:
        Despesa();
        Despesa(std::string t, double v);

        std::string getTipoDespesa();
        double getValor();

        void setTipoDespesa(std::string t);
        void setvalor(double v);

    private:
        std::string tipoDespesa;
        double valor;
};

#endif // DESPESA_H
