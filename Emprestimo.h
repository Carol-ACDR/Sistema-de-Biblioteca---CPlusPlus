#ifndef Emprestimo_H_
#define Emprestimo_H_
#include <iostream>
using namespace std;
#include<sstream>

class Emprestimo{
  private:
    string nomeDoCliente;
    string nomeDoLivro;
    string Datainicial;
    string DataFinal;
    bool devolvido;
  public:
    Emprestimo();
    Emprestimo(string nomeDoCliente, string nomeDoLivro, string Datainicial,string DataFinal);
    string getNomeDoCliente();
    string getNomeDoLivro();
    string getDataIncial();
    string getDataFinal();
    bool getDevolvido();
    void setDevolvido();
};
#endif 
