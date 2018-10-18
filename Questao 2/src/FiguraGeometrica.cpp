#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
}

void FiguraGeometrica::setNome(string nome){
    this->nome = nome;
}

string FiguraGeometrica::getNome(){
    return nome;
}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}
