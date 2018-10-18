#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta();
        Conta(string nomeCliente, int numero, double saldo);
        virtual ~Conta();

    protected:
        string nomeCliente;
        int numero;
        double saldo;

        void sacar(double valor);
        void depositar(double valor);

        void setNomeCliente(string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);

        string getNomeCliente();
        int getNumero();
        double getSaldo();

    private:
};

#endif // CONTA_H
