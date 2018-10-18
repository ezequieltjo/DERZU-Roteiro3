#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"
#include "Retangulo.h"

using namespace std;

int main()
{
    FiguraGeometrica *figuras[3];

    figuras[0] = new Triangulo("Triangulo", 5, 5);
    figuras[1] = new Retangulo("Retangulo", 4, 5);
    figuras[2] = new Circulo("Circulo", 3.14);

    for(int i = 0; i < 3; i++){
        cout << figuras[i]->getNome() << endl;
        cout << figuras[i]->calcularArea() << endl << endl;
    }

    return 0;
}
