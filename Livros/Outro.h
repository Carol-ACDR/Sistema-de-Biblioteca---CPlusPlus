#ifndef Outro_H_
#define Outro_H_
#include "livro.h"
class Outro: virtual public Livro{
  private:
    string Especificação=" ";
    string Nome_da_especificação = " ";
  public:
    Outro(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel);
    void setNomedaesp(string A);
    const string getNomedaesp();
    template <typename T> void setesp(T B){
  stringstream pass;
  pass<<B;
  this->Especificação = pass.str();
  return;};
    const string getesp();
    const string toString();
};
#endif