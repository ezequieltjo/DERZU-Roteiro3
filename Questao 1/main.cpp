#include <iostream>
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main()
{
    Animal a = Animal();
    Animal *g = new Gato();

    cout << "Na progamacao orientada a objetos, o polimorfismo consiste na capacidade dos objetos "
            "se comportarem de forma diferente dependendo de suas caracteristicas ou do ambiente "
            "que estao submetidas, mesmo que as diferentes acoes foram designadas igualmente em sua semantica. "
            "O polimorfismo pode ser aplicado desde funcoes com mesma identidade, mas que recebe parametros "
            "diferentes, ate os metodos virtuais que sao dependentes da classe a qual o objeto pertence.\n"<< endl;

    cout << "Exemplo: \n" << endl;

    cout << "Animal faz: " << a.FazerBarulho() << endl;
    cout << "E o gato: " << g->FazerBarulho() << endl;

    return 0;
}
