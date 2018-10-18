#include "Horista.h"

Horista::Horista()
{
    //ctor
}

double Horista::calcularSalario(){

    double total = 0;
    int aux = 0;

    if(horasTrabalhadas <= 40){
        total = horasTrabalhadas * salarioHora;
        return total;
    }
    else {
        aux = horasTrabalhadas - 40;
        total = (salarioHora * 40) + ((salarioHora*1.5) * aux);
        return total;
    }
}

void Horista::setSalarioHora(double salarioHora){
    this->salarioHora = salarioHora;
}

double Horista::getSalarioHora(){
    return salarioHora;
}

void Horista::setHorasTrabalhadas(int horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

int Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

Horista::~Horista()
{
    //dtor
}
