#ifndef Ficção_Cientifica_H_
#define Ficção_Cientifica_H_
#include "livro.h"
class Ficção: public Livro{
  protected:
  int idade_minima;
  public:
  Ficção(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int idade_minima,int Quantdisponivel);
  const string toString();
  const int getidade_minima();
};         
#endif