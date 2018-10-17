#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        virtual ~ContaEspecial();
        void defineLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
