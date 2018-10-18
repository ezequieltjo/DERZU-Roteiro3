#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista();
        virtual ~Horista();

        virtual double calcularSalario();

        void setSalarioHora(double salaHora);
        void setHorasTrabalhadas(int horasTrabalhadas);
        double getSalarioHora();
        int getHorasTrabalhadas();

    private:
        double salarioHora;
        int horasTrabalhadas;
};

#endif // HORISTA_H
