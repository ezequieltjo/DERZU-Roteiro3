#include "Triangulo.h"

Triangulo::Triangulo(string nome, double base, double altura)
{
    this->nome = nome;
    this->base = base;
    this->altura = altura;
}

double Triangulo::calcularArea(){
    return (base*altura)/2;
}

Triangulo::~Triangulo()
{
    //dtor
}
