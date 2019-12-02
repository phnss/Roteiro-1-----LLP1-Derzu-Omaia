#ifndef EMPREGADO_H
#define EMPREGADO_H

#include<string>

class Empregado
{
    public:
        Empregado();
        Empregado(std::string n, std::string sn, double s);

        void setNome(std::string n);
        void setSobrenome(std::string sn);
        void setSalario(double s);

        std::string getNome();
        std::string getSobrenome();
        double getSalario();

    protected:

    private:
        std::string nome;
        std::string sobrenome;
        double salario;
};

#endif // EMPREGADO_H
