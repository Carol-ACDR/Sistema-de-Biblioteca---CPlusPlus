#ifndef Documentario_H_
#define Documentario_H_
#include "livro.h"
class Documentario: public Livro{
  protected:
  string tópico;
  public:
  Documentario(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel,string tópico);
  const string toString();
  const string gettópico();
};         
#endif