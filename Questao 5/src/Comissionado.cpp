#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

double Comissionado::calcularSalario(){
    double total = salarioBase;

    total += (vendasSemanais * percentualComissao);

    return total;
}

void Comissionado::setSalarioBase(double salarioBase){
    this->salarioBase = salarioBase;
}

double Comissionado::getSalarioBase(){
    return salarioBase;
}

void Comissionado::setVendasSemanais(double vendasSemanais){
    this->vendasSemanais = vendasSemanais;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}

Comissionado::~Comissionado()
{
    //dtor
}
