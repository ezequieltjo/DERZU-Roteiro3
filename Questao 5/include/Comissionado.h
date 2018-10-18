#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        virtual ~Comissionado();

        virtual double calcularSalario();

        void setSalarioBase(double salarioBase);
        void setPercentualComissao(double percentualComissao);
        void setVendasSemanais(double vendasSemanais);

        double getSalarioBase();
        double getVendasSemanais();
        double getPercentualComissao();

    private:
        double salarioBase, vendasSemanais, percentualComissao;
};

#endif // COMISSIONADO_H
