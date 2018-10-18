#include "Retangulo.h"

Retangulo::Retangulo(string nome, double base, double altura)
{
    this->nome = nome;
    this->base = base;
    this->altura = altura;
}

double Retangulo::calcularArea(){
    return base*altura;
}

Retangulo::~Retangulo()
{
    //dtor
}
