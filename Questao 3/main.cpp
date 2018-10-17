#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main()
{

    Conta c = Conta();
    ContaEspecial e = ContaEspecial();

    c.setSalarioMensal(1200);
    c.setNomeCliente("Joao");
    c.setNumeroConta("366545");
    c.setLimite(2000); //n sei qual a necessidade, mas né...
    c.defineLimite();
    c.setSaldo(5000);

    e.setSalarioMensal(1700);
    e.setNomeCliente("Maria");
    e.setNumeroConta("365462");
    e.setLimite(1000);
    e.defineLimite();
    e.setSaldo(10000);

    cout << "Saldo da conta normal: " << c.getSaldo() << " e o limite da conta: " << c.getLimite() << endl;
    cout << "Sacando 500 conto" << endl;
    c.sacar(500);
    cout << "Novo saldo: " << c.getSaldo() << endl << endl;

    cout << "Saldo da conta especial: " << e.getSaldo() << " e o limite da conta: " << e.getLimite()<< endl;
    cout << "Sacando 1500 conto" << endl;
    e.sacar(1500);
    cout << "Novo saldo: " << e.getSaldo() << endl << endl;

    cout << "Saldo da conta normal: " << c.getSaldo() << endl;
    cout << "Depositando 1000 conto" << endl;
    c.depositar(1000);
    cout << "Novo saldo: " << c.getSaldo() << endl << endl;

    cout << "Saldo da conta especial: " << e.getSaldo() << endl;
    cout << "Depositando 11500 conto" << endl;
    e.depositar(11500);
    cout << "Novo saldo: " << e.getSaldo() << endl;

    return 0;
}
