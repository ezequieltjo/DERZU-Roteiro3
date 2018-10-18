#include <iostream>
#include <stdlib.h>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha S = SistemaGerenciaFolha();
    int resposta = 0;

    while (1){
        cout << "Cadastrar funcionario(1)\n"
                "Calcular valor total(2)\n"
                "Consultar salario de funcionario especifico(3)" << endl;
        cin >> resposta;

        switch (resposta) {

        case 1:
            S.setFuncionarios();
            break;

        case 2:
            cout << S.calculaValorTotalFolha() << endl;
            system("pause");
            break;

        case 3:
            cout << S.consultaSalarioFuncionario();
            cout << endl;
            system("pause");
            break;

        default:
            resposta = 0;
        }
    }
}
