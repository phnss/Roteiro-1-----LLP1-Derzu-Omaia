#ifndef DATA_H
#define DATA_H


class Data
{
    public:

        //Data(int d, int m, int a);//assinatura do método

        int getDia();
        int getMes();
        int getAno();

        int setDia();
        int setMes();
        int setAno();

        Data();
        avancarDia();

    private:
        int dia, mes, ano;
};

#endif // DATA_H
