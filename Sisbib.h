#ifndef Bib_H_
#define Bib_H_
#include "Livros/Documentario.h"
#include "Livros/Educacional.h"
#include "Livros/Ficção_Cientifica.h"
#include "Livros/infantil.h"
#include "Livros/Outro.h"
#include "Livros/Religioso.h"
#include "Livros/Romance.h"
#include "Livros/Terror.h"
#include "Pessoas/Funcionario.h"
#include "Pessoas/Cliente.h"
#include "Emprestimo.h"
#include <vector>
#include <list>

class Sisbib{
  private:
    int N_funcionarios = 0;
    int N_clientes = 0;
    vector<Livro*> Livros;
    list<Pessoa*> Pessoas;
  public:
    void adicionarCliente(Cliente *C);
    void adicionarFuncionario(Funcionario *F);
    void adicionarLivro(Livro *A);
    bool realizarEmprestimo(string NomeLivro,string DataInicial,string DataFinal,string NomePessoa);
    Pessoa buscarPessoa(string &nome);
    const float CobrarMulta(string &nome);
    const void imprimirClientes();
    const void imprimirFuncionarios();
    const void imprimirLivros();
    string devolverEmprestimo(string &NomePessoa, string &NomeLivro);
     bool removerFuncionario(string &nome);
    bool removerCliente(string &nome);
    void removerLivro(string &nome);
};
#endif