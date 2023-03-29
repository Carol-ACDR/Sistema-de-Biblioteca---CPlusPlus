#include "Cliente.h"

Cliente::Cliente(int NumRG,string Nome,string Telefone,string Endereço):Pessoa(NumRG, Nome,Telefone,Endereço){
  this->quantMultas = 0;
}

int Cliente::getQuantMultas(){
  return this->quantMultas;
}

int Cliente::getQuantEmp(){
  return this->quantEmp;
}

int Cliente::getId(){
  return this->id;
}

string Cliente::getNome(){
  return Pessoa::getNome();
}

void Cliente::addMulta(){
  this->quantMultas++;
}

bool Cliente::inserirEmprestimo(Emprestimo E){
  if(this->quantEmp >= 5 || E.getNomeDoCliente() != Pessoa::getNome()){
    return false;
  }
  this->emp[this->quantEmp] = E;
  this->quantEmp++;
  return true;
}

bool Cliente::verificarEmprestimo(string nomeDoLivro){
  for(int i = 0; i < 5; i++){
    if(nomeDoLivro == emp[i].getNomeDoLivro()){
      return true;
    }
  }
  return false;
}

string Cliente::RemoverEmprestimo(string nomeDoLivro){
  for(int i = 0; i < 5; i++){
    if(nomeDoLivro == emp[i].getNomeDoLivro()){
      string r = emp[i].getDataFinal();
      emp[i] = Emprestimo();
      this->quantEmp--;
      return r;
    }
  }
  return "Não encontrado";
}

string Cliente::toString(){
  stringstream e;
  e << this->quantEmp;
  stringstream m;
  m << this->quantMultas;
  return Pessoa::toString() + "\n" + " quantidade de emprestimos: " + e.str() + "\n quantidade de multas: " + m.str();
}