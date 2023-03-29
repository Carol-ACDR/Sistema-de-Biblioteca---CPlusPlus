#include "Pessoa.h"

Pessoa::Pessoa(int &NumRG,string &Nome,string &Telefone,string &Endereço){
  this->NumRG = NumRG;
  this->Nome = Nome;
  this->Telefone = Telefone;
  this->Endereço = Endereço;
}

Pessoa::Pessoa(){
  this->NumRG = 0;
  this->Nome = "";
  this->Telefone = "";
  this->Endereço = "";
}
int Pessoa::getNumRG(){
  return this->NumRG;
}

string Pessoa::getNome(){
  return this->Nome;
}

string Pessoa::getTelefone(){
  return this->Telefone;
}

string Pessoa::getEndereço(){
  return this->Endereço;
}

int Pessoa::getId(){
  return -1;
}

string Pessoa::toString(){
  stringstream rg;
  rg << this->NumRG;
  return "Nome:: "+ this->Nome + "\n Rg = " + rg.str() + "\n Endereço = " + this->Endereço + "\n Telefone = " + this-> Telefone;
}