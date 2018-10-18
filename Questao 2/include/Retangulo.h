#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo(string nome, double base, double altura);
        virtual double calcularArea();
        virtual ~Retangulo();

    protected:

    private:
        double base;
        double altura;
};

#endif // RETANGULO_H
