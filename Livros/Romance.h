#ifndef Romance_H_
#define Romance_H_
#include "livro.h"
class Romance: public Livro{
  protected:
  int idade_minima;
  public:
  Romance(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel,int idade_minima);
  const string toString();
  const int getidade_minima();
};         
#endif