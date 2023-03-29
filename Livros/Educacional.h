#ifndef Educacional_H_
#define Educacional_H_
#include "livro.h"
class Educacional: public Livro{
  protected:
  string publico_alvo;
  public:
  Educacional(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel,string publico_alvo);
  const string toString();
  const string getpublico_alvo();
};         
#endif