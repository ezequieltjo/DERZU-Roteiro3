#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nomeCliente, int numero, double saldo, double salario, int limite)
: ContaCorrente(nomeCliente, numero, saldo, salario, limite){
    salario = 0;
    limite = 0;
}

double ContaEspecial::defineLimite(){
    limite = salario*4;
    return limite;
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}
