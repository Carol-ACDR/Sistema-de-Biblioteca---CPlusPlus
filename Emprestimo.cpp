#include "Emprestimo.h"

Emprestimo::Emprestimo(){
  this->nomeDoCliente = "";
  this->Datainicial = "";
  this->DataFinal = "";
  this->devolvido = false;
  this->nomeDoLivro = "";
}
Emprestimo::Emprestimo(string nomeDoCliente, string nomeDoLivro, string Datainicial,string DataFinal){
  this->nomeDoCliente = nomeDoCliente;
  this->Datainicial = Datainicial;
  this->DataFinal = DataFinal;
  this->devolvido = false;
  this->nomeDoLivro = nomeDoLivro;
}

string Emprestimo::getNomeDoCliente(){
  return this->nomeDoCliente;
}

string Emprestimo::getNomeDoLivro(){
  return this->nomeDoLivro;
}

string Emprestimo::getDataIncial(){
  return this->Datainicial;
}

string Emprestimo::getDataFinal(){
  return this->DataFinal;
}

bool Emprestimo::getDevolvido(){
  return this->devolvido;
}

void Emprestimo::setDevolvido(){
  this->devolvido = true;
}


