#include "Educacional.h"

Educacional::Educacional(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int Quantdisponivel,string publico_alvo):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas,Quantdisponivel){
  this->publico_alvo=publico_alvo;}
const string Educacional::getpublico_alvo(){return this->publico_alvo;}
const string Educacional::toString(){
  return Livro::toString()+"\n Publico Alvo: "+this->publico_alvo;
}