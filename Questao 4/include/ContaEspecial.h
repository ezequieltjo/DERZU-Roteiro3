#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

using namespace std;

class ContaEspecial : protected ContaCorrente
{
    public:
        ContaEspecial(string nomeCliente, int numero, double saldo, double salario, int limite);
        virtual ~ContaEspecial();

    protected:

    private:
        double defineLimite();
};

#endif // CONTAESPECIAL_H
