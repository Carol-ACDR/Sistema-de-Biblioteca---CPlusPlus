#include "Documentario.h"

Documentario::Documentario(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int Quantdisponivel,string tópico):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas,Quantdisponivel){ 
  this->tópico=tópico;

}

const string Documentario::gettópico(){
  return this->tópico;
}

const string Documentario::toString(){
  return Livro::toString()+"\n Tópico : "+this->tópico;
}