#include "Ficção_Cientifica.h"

Ficção::Ficção(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas, int idade_minima,int Quantdisponivel):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas, Quantdisponivel){
  this->idade_minima=idade_minima;}
const int Ficção::getidade_minima(){return this->idade_minima;}
const string Ficção::toString(){
  return Livro::toString()+"\n Idade mínima: "+to_string(this->idade_minima);
}