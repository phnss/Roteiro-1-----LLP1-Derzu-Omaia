#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string n, int i, std::string t);

        std::string getNome();
        int getIdade();
        std::string getTelefone();

        void setNome(std::string n);
        void setIdade(int i);
        void setTelefone(std::string t);

    private:

        std::string nome;
        int idade;
        std::string telefone;

};

#endif // PESSOA_H
