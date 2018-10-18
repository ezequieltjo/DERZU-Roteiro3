#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        virtual ~Assalariado();

        virtual double calcularSalario();

        void setSalario(double sala);
        double getSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
