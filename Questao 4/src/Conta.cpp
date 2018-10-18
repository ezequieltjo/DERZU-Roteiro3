#include "Conta.h"

Conta::Conta(string nomeCliente, int numero, double saldo){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

Conta::Conta(){

}

void Conta::sacar(double valor){

    if (valor>saldo){
        cout << "Saldo Indisponivel" << endl;
    }
    else{
        saldo = saldo - valor;
    }
}

void Conta::depositar(double valor){
    saldo = saldo + valor;
}

void Conta::setNomeCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero){
    this->numero = numero;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumero(){
    return numero;
}

double Conta::getSaldo(){
    return saldo;
}

Conta::~Conta()
{
    //dtor
}
