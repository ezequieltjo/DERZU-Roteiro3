#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        void setMatricula(int matricula);
        void setNome(string nome);

        string getNome();
        int getMatricula();

        virtual double calcularSalario() = 0;

    protected:
        string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
