#include "infantil.h"

Infantil::Infantil(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int Quantdisponivel,int idade_minima):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas,Quantdisponivel){
  this->idade_minima=idade_minima;}
const int Infantil::getidade_minima(){return this->idade_minima;}
const string Infantil::toString(){
  return Livro::toString()+"\n Idade mínima: "+to_string(this->idade_minima);
}