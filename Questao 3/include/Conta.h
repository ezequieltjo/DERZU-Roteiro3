#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

using namespace std;

class Conta : public IConta
{
    public:
        Conta();
        virtual ~Conta();

        virtual void sacar(double valor);
        virtual void depositar(double valor);

        void setNomeCliente(string nomeCliente);
        void setNumeroConta(string numeroConta);
        void setSaldo(double saldo);
        void setSalarioMensal(double salarioMensal);
        void setLimite(double limite);

        void defineLimite();

        string getNomeCliente();
        string getNumeroConta();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();

    protected:
        string nomeCliente, numeroConta;
        double salarioMensal, saldo, limite;

    private:
};

#endif // CONTA_H
