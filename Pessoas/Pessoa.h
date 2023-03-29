#ifndef Pessoa_H_
#define Pessoa_H_
#include <iostream>
using namespace std;
#include<sstream>

class Pessoa{
  private:
    int NumRG;
    string Nome;
    string Telefone;
    string Endereço;
  public:
    Pessoa(int &NumRG,string &Nome, string &Telefone, string &Endereço);
    Pessoa();
    int getNumRG();
    string getNome();
    string getTelefone();
    string getEndereço();
    virtual int getId();
    virtual string toString();
};
#endif