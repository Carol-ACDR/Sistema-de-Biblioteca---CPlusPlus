#ifndef Religioso_H_
#define Religioso_H_
#include "livro.h"
class Religioso: public Livro{
  protected:
  string religião_alvo;
  public:
  Religioso(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel,string religião_alvo);
  const string toString();
  const string getReligião_alvo();
};         
#endif