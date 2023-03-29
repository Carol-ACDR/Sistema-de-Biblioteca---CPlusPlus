#include "livro.h"

  Livro::Livro(string &Nome, int &ano_de_lançamento,string &nome_do_autor,string &editora,int &numero_de_paginas,int &QuantDisponivel){
    this->Nome=Nome;
    this->ano_de_lançamento=ano_de_lançamento;
    this->nome_do_autor=nome_do_autor;
    this->editora=editora;
    this->numero_de_paginas=numero_de_paginas;
    this-> QuantDisponivel= QuantDisponivel;

  }
  const string Livro::getNome(){
    return this->Nome;
  }
  const int Livro::getano(){
    return this->ano_de_lançamento;
  }
  const string Livro::getNomedoAutor(){
    return this->nome_do_autor;
  }
  const string Livro::getEditora(){
    return this->editora;
  }
  const int Livro::getNumero_de_paginas(){
    return this->numero_de_paginas;
  }
  const int Livro::getQuantDisponivel(){
    return this->QuantDisponivel;
  }
  void Livro::setQuantDisponivel(int a){
    this->QuantDisponivel+=a;
  }
  const bool Livro::operator==(Livro& L){
    if((this->Nome == L.getNome()) && (this->nome_do_autor == L.getNomedoAutor())){return true;}
    else{return false;}
  }

  const string Livro::toString(){
    return "\n Nome da Obra: "+this->Nome+"\n Autor da obra: "+this->nome_do_autor+"\n Ano de lançamento: "+to_string(this->ano_de_lançamento)+"\n Editora: "+this->editora+"\n Numero de Páginas: "+to_string(this->numero_de_paginas)+"\n Quantidade Dísponivel: "+to_string(this->QuantDisponivel);
  }