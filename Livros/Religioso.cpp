#include "Religioso.h"

Religioso::Religioso(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int Quantdisponivel,string religião_alvo):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas,Quantdisponivel){
  this->religião_alvo=religião_alvo;}
const string Religioso::getReligião_alvo(){return this->religião_alvo;}
const string Religioso::toString(){
  return Livro::toString()+"\n Religião Alvo: "+this->religião_alvo;
}