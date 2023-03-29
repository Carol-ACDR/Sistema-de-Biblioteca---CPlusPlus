#ifndef Terror_H_
#define Terror_H_
#include "livro.h"
class Terror: public Livro{
  protected:
  int idade_minima;
  public:
  Terror(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel,int idade_minima);
  const string toString();
  const int getidade_minima();
};         
#endif 
