#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void setFuncionarios();

        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

    private:
        Funcionario *funcionarios[5];
        int Tipos[5], iAtual;
};

#endif // SISTEMAGERENCIAFOLHA_H
