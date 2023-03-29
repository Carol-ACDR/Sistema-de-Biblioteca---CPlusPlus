#include "Outro.h"

Outro::Outro(string Nome, int ano_de_lançamento,string nome_do_autor,string editora,int numero_de_paginas,int disponivel):Livro(Nome,ano_de_lançamento,nome_do_autor,editora,numero_de_paginas,disponivel){
  
}


void Outro::setNomedaesp(string A){
  this->Nome_da_especificação = A;
  return;
}

const string Outro::getNomedaesp(){
  return this->Nome_da_especificação;
}


const string Outro::getesp(){
  return this->Especificação;
}

const string Outro::toString(){
  if (this->Especificação == " "){return Livro::toString();}
  else{return Livro::toString()+"\n "+this->Nome_da_especificação + ": "+this->Especificação;}
}


