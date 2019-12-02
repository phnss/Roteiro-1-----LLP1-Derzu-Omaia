#ifndef INVOICE_H
#define INVOICE_H
#include <stdlib.h>
#include<string>

class Invoice
{
    public:
        Invoice();

        int getNumero();
        int getQuantidade();
        float getPreco();
        std::string getDescricao();
        float getInvoiceAmount();

        void setNumero();
        void setQuantidade();
        void setPreco();
        void setDescricao();
    private:
        int numero;
        int quantidade;
        float preco;
        std::string descricao;
};

#endif // INVOICE_H
