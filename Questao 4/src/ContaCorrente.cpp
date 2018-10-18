#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(string nomeCliente, int numero, double saldo, double salario, int limite)
:Conta(nomeCliente, numero, saldo){
    this->salario = salario;
    this->limite = limite;
}

ContaCorrente::ContaCorrente(double salario, int limite){
    this->salario = salario;
    this->limite = limite;
}

void ContaCorrente::setLimite(int limite){
    this->limite = limite;
}

void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}

int ContaCorrente::getLimite(){
    return limite;
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::defineLimite(){
    limite = salario*2;
    return limite;
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}
