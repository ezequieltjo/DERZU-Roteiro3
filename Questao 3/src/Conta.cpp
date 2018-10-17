#include "Conta.h"

Conta::Conta()
{
    nomeCliente = numeroConta = "";
    salarioMensal = saldo = limite = 0;
}

void Conta::sacar(double valor){
    saldo = saldo - valor;
}

void Conta::depositar(double valor){
    saldo = saldo + valor;
}

void Conta::setNomeCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroConta(string numeroConta){
    this->numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}

void Conta::setLimite(double limite){
    this->limite = limite;
}

void Conta::defineLimite(){
    limite = 2*salarioMensal;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

string Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

Conta::~Conta()
{
    //dtor
}
