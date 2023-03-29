#ifndef Cliente_H_
#define Cliente_H_
#include "../Emprestimo.h"
#include "Pessoa.h"

class Cliente: public Pessoa{
  private:
    int quantMultas;
    int quantEmp;
    Emprestimo emp[5];
    const int id = 0;
  public:
    Cliente(int NumRG,string Nome,string Telefone,string Endereço);
    int getQuantMultas();
    int getQuantEmp();
    int getId();
    string getNome();
    void addMulta();
    bool inserirEmprestimo(Emprestimo E);
    bool verificarEmprestimo(string nomeDoLivro);
    string RemoverEmprestimo(string nomeDoLivro);
    string toString();
};
#endif