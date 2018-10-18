#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(string nome, double base, double altura);
        virtual double calcularArea();
        virtual ~Triangulo();

    protected:

    private:
        double base, altura;
};

#endif // TRIANGULO_H
