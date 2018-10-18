#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();

        virtual double calcularArea() = 0;
        void setNome(string nome);
        string getNome();

        virtual ~FiguraGeometrica();

    protected:
        string nome;
    private:
};

#endif // FIGURAGEOMETRICA_H
