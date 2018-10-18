#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

using namespace std;

class Poupanca : protected Conta
{
    public:
        Poupanca(int variacao, double taxaRendimento);
        Poupanca(string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);
        virtual ~Poupanca();

    protected:

    private:
        int variacao;
        double taxaRendimento;

        void setVariacao(int variacao);
        void setTaxaRendimento(double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();

        double render();
};

#endif // POUPANCA_H
