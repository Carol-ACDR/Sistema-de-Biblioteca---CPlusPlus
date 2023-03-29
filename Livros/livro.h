#ifndef Livro_H_
#define Livro_H_
#include <iostream>
using namespace std;
#include <string.h>
#include <sstream>
class Livro{
  private:
  string Nome;
  int ano_de_lançamento;
  string nome_do_autor;
  string editora;
  int numero_de_paginas;
  int QuantDisponivel;
  public:
  Livro(string &Nome, int &ano_de_lançamento,string &nome_do_autor,string &editora,int &numero_de_paginas,int &QuantDisponivel);
  const string getNome();
  const int getano();
  const string getNomedoAutor();
  const string getEditora();
  const int getNumero_de_paginas();
  const bool operator==(Livro &L);
  const int getQuantDisponivel();
  void setQuantDisponivel(int a);
  virtual const string toString();
};
#endif