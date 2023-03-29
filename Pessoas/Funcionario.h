#ifndef Funcionario_H_
#define Funcionario_H_
#include "Pessoa.h"

class Funcionario: public Pessoa{
  private:
    double salario;
    string data_de_contrato;
    const int id = 1;
    string designação;
  public:
    Funcionario();
    Funcionario(int NumRG,string Nome,string designação,string Telefone,string Endereço, float salario, string data_de_contrato);
    double getSalario();
    string getDataDeContrato();
    int getId();
    string getdesignação();
    string toString();
};
#endif