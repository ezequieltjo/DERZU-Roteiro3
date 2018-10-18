#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

using namespace std;

class ContaCorrente : protected Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double salario, int limite);
        ContaCorrente(string nomeCliente, int numero, double saldo, double salario, int limite);
        virtual ~ContaCorrente();

    protected:
        int limite;
        double salario;

    private:

        void setLimite(int limite);
        void setSalario(double salario);

        int getLimite();
        double getSalario();

        double defineLimite();
};

#endif // CONTACORRENTE_H
