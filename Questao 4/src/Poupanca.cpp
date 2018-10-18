#include "Poupanca.h"

Poupanca::Poupanca(string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento)
:Conta(nomeCliente, numero, saldo){
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}

Poupanca::Poupanca(int variacao, double taxaRendimento){
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}

void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento){
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}

Poupanca::~Poupanca()
{
    //dtor
}
