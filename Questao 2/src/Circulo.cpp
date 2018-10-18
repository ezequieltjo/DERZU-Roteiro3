#include "Circulo.h"

Circulo::Circulo(string nome, double raio)
{
    this->nome = nome;
    this->raio = raio;
}

double Circulo::calcularArea(){
    return 3.14*raio*raio;
}

Circulo::~Circulo()
{
    //dtor
}
