#include "Sisbib.h"

void Sisbib::adicionarCliente(Cliente *C){
  Pessoas.push_back(C);
  this->N_clientes++;
  
}
void Sisbib::adicionarFuncionario(Funcionario *F){
  list<Pessoa*>::iterator K;
  int L = 0;
  for (K = Pessoas.begin(); K != Pessoas.end();K++){
  if (L==this->N_funcionarios){Pessoas.insert(K,F);this->N_funcionarios++;return;}L++;}
  Pessoas.push_back(F);this->N_funcionarios++;return;
  }
void Sisbib::adicionarLivro(Livro *B){
  for (int i = 0;i < Livros.size();i++){
    if(Livros[i]==B){
      int C = B->getQuantDisponivel();
      Livros[i]->setQuantDisponivel(C);
      return;}
    }
  Livros.push_back(B);
  return;
  }
bool Sisbib::realizarEmprestimo(string NomeLivro,string DataInicial,string DataFinal,string NomePessoa){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if(i>(N_funcionarios-1) && (*it)->getNome() == NomePessoa){
      for (int i = 0;i < Livros.size();i++){
    if(Livros[i]->getNome()==NomeLivro && Livros[i]->getQuantDisponivel()>0){
      Emprestimo e(NomePessoa,NomeLivro,DataInicial,DataFinal);
      Cliente* H;
      H =dynamic_cast<Cliente*>((*it));
      if(H->getQuantMultas()<5){
        if(H->inserirEmprestimo(e)){
          Livros[i]->setQuantDisponivel((-1));
          return true;}
      return false;}
      return false;}
      }}
    i++;
  }
  return false;
}
Pessoa Sisbib::buscarPessoa(string &nome){
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if((*it)->getNome()==nome){
      return (*(*it));
      }
    }
  cout<<"Não foi possivel encontrar"<<nome<<endl;
  Funcionario f;
  return f;
}

const float Sisbib::CobrarMulta(string &nome){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if(i>(N_funcionarios-1) && (*it)->getNome() == nome){
      Cliente* H;
      H =dynamic_cast<Cliente*>((*it));
      (H)->addMulta();
    }
    i++;
  }
  return 5.00;
}

const void Sisbib::imprimirClientes(){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if(i>(N_funcionarios-1)){cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<(*it)->toString()<<endl;}
    i++;
  }
}
const void Sisbib::imprimirFuncionarios(){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if(i<N_funcionarios){cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<(*it)->toString()<<endl;}
    i++;
  }
}

const void Sisbib::imprimirLivros(){
  for(int i=0; i<Livros.size(); i++){
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<Livros[i]->toString()<<endl;
  }
}

string Sisbib::devolverEmprestimo(string &NomePessoa, string &NomeLivro){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if(i>(N_funcionarios-1) && (*it)->getNome() == NomePessoa){
      for (int i = 0;i < Livros.size();i++){
    if(Livros[i]->getNome()==NomeLivro){
      if(dynamic_cast<Cliente*>((*it))->RemoverEmprestimo(NomeLivro) != "Não encontrado"){Livros[i]->setQuantDisponivel(1);return "Livro Removido";}
      else{return "Livro não encontrado";}
    }}
    return "Livro não encontrado";
    }
    i++;
    }
  return "Cliente não encontrado";
}
bool Sisbib::removerFuncionario(string &nome){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if ( (i<N_funcionarios) && ((*it)->getNome()==nome)){
     Pessoas.remove(*(it));this->N_funcionarios--;return true;
    }
    i++;
}
return false;
}
bool Sisbib::removerCliente(string &nome){
  int i = 0;
  for(list<Pessoa*>::iterator it = Pessoas.begin(); it!=Pessoas.end();++it){
    if((i>(N_funcionarios-1))&& ((*it)->getNome()==nome)){
      Pessoas.remove(*(it));N_clientes--;return true;
    }
    i++;
    }
    return false;
}
void Sisbib::removerLivro(string &nome){
    for (int i = 0;i < Livros.size();i++){
      if(Livros[i]->getNome()==nome){
        Livros[i]->setQuantDisponivel(-1);
        if(Livros[i]->getQuantDisponivel()==0){Livros.erase((Livros.begin()+i));cout<<"Livro completamente removido"<<endl;return;}
        else{cout<<"Unidade do livro removida, unidades restantes : "+to_string(Livros[i]->getQuantDisponivel())<<endl;return;}}
    }
    cout<<"Livro não encontrado"<<endl;
    }