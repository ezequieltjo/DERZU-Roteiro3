#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo(string nome, double raio);
        virtual double calcularArea();
        virtual ~Circulo();

    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
