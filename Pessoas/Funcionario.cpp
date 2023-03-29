#include "Funcionario.h"

Funcionario::Funcionario():Pessoa(){ 
  this->salario = 0;
  this->data_de_contrato = "";
  this->designação = "";
}

Funcionario::Funcionario(int NumRG,string Nome,string designação,string Telefone,string Endereço, float salario, string data_de_contrato):Pessoa(NumRG,Nome,Telefone,Endereço){
  this->salario = salario;
  this->data_de_contrato = data_de_contrato;
  this->designação = designação;
}

double Funcionario::getSalario(){
  return this->salario;
}

string Funcionario::getDataDeContrato(){
  return this->data_de_contrato;
}

int Funcionario::getId(){
  return this->id;
}

string Funcionario::getdesignação(){
  return this->designação;
}



string Funcionario::toString(){
  stringstream s;
  s << this->salario;
  return Pessoa::toString() + "\n salario = " + s.str() + "\n data de contratação = " + this->data_de_contrato  + "\n designação = " + this->designação;
}