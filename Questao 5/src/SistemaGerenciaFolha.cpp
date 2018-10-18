#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    iAtual = 0;
}

void SistemaGerenciaFolha::setFuncionarios(){
    int tipo, matricula;
    string nome;
    double salario, percentual;

    cout << "Escolha o tipo de funcionario: Assalariado(1), Horista(2) ou Comissionario(3)" << endl;
    cin >> tipo;
    cin.ignore();

    if(tipo == 1){
        Funcionario *f = new Assalariado();

        cout << "Nome: " << endl;
        getline(cin, nome);
        cout << "Matricula: " << endl;
        cin >> matricula;
        cout << "Salario: " << endl;
        cin >> salario;

        f->setNome(nome);
        f->setMatricula(matricula);

        ((Assalariado*)f)->setSalario(salario);
        funcionarios[iAtual] = f;
        Tipos[iAtual] = 1;
    }

    if(tipo == 2){
        Funcionario *h = new Horista();

        cout << "Nome: " << endl;
        getline(cin, nome);
        cout << "Matricula: " << endl;
        cin >> matricula;
        cout << "Salario por hora: " << endl;
        cin >> salario;

        h->setNome(nome);
        h->setMatricula(matricula);

        ((Horista*)h)->setSalarioHora(salario);
        ((Horista*)h)->setHorasTrabalhadas(3);

        funcionarios[iAtual] = h;
        Tipos[iAtual] = 2;
    }

    if(tipo == 3){
        Funcionario *c = new Comissionado();
        cout << "Nome: " << endl;
        getline(cin, nome);
        cout << "Matricula: " << endl;
        cin >> matricula;
        cout << "Salario base: " << endl;
        cin >> salario;
        cout << "Percentual de comissao: " << endl;
        cin >> percentual;

        c->setNome(nome);
        c->setMatricula(matricula);

        ((Comissionado*)c)->setSalarioBase(salario);
        ((Comissionado*)c)->setVendasSemanais(20);
        ((Comissionado*)c)->setPercentualComissao(percentual);

        funcionarios[iAtual] = c;
        Tipos[iAtual] = 3;
    }

    iAtual++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total = 0;
    for(int i=0; i < iAtual; i++){
        total += funcionarios[i]->calcularSalario();
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(){
    int i;
    cout << "Digite o funcionario para consulta: " << endl;
    cin >> i;
    if(i >= 0 && i < 6){

        if(Tipos[i] == 1){
        cout << "Salario: ";
            return ((Assalariado*)funcionarios[i])->calcularSalario();
        }

        if(Tipos[i] == 2){
        cout << "Salario: ";
            return ((Horista*)funcionarios[i])->calcularSalario();
        }

        if(Tipos[i] == 3){
        cout << "Salario: ";
            return ((Comissionado*)funcionarios[i])->calcularSalario();
        }
    }

    else{
        cout << "Funcionario nao encontrado" << endl;
    }

    return 0;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha(){

}
