#ifndef Infantil_H_
#define Infantil_H_
#include "livro.h"
class Infantil: public Livro{
  protected:
  int idade_minima;
  public:
  Infantil(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas, int Quantdisponivel,int idade_minima);
  const string toString();
  const int getidade_minima();
};         
#endif