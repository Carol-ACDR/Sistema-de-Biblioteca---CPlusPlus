#include <iostream>
using namespace std;
#include "Sisbib.h"

int main() {
  Sisbib biblioteca;
  const string admNome = "Fulano";
  const string senha = "123456";
  system("clear");
  cout<<"-----------------------------------------"<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<"            Seja bem vindo ao:           "<<endl;
  cout<<"         ──────▄▀▄─────▄▀▄\n         ─────▄█░░▀▀▀▀▀░░█▄\n         ─▄▄──█░░░░░░░░░░░█──▄▄\n         █▄▄█─█░░▀░░┬░░▀░░█─█▄▄█"<<endl;
  cout<<"------------------SisBib-----------------"<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<"       Digite algo para continuar:"<<endl;
  string cont;
  cout<<"                   ";
  getline(cin, cont);
  while(true){
    system("clear");
    int op = 0;
    cout<<"-----------------------------------------"<<endl;
    cout<<" Digite 1 para logar como adm; \n Digite 2 para logar como funcionario; \n Digite 3 para encerrar o programa"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cin >> op;
    cin.ignore(10000,'\n'); 
    if(op == 1){
      system("clear");
      string l;
      string s;
      cout<<"-----------------------------------------"<<endl;
      cout<<"Digite o login: "<<endl;
      cout<<"-----------------------------------------"<<endl;
      getline(cin, l);
      cout<<"-----------------------------------------"<<endl;
      cout<<"Digite a senha: "<<endl;
      cout<<"-----------------------------------------"<<endl;
       getline(cin, s);
      if(admNome != l && senha != s){
        cout<<"Senha ou login errados"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"digite qualquer coisa para continuar"<<endl;
        cout<<"-----------------------------------------"<<endl;
        string h;
         getline(cin, h);
      }else{
        while(true){  
          system("clear");
          int op2 = 0;
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite 1 para adicionar um novo funcionario; \nDigite 2 para imprimir os funcionarios; \nDigite 3 para remover Funcionário \nDigite 4 para voltar a tela de login"<<endl;
          cout<<"-----------------------------------------"<<endl;
          cin >> op2;
          cin.ignore(10000,'\n'); 
          system("clear");
          if(op2 == 1){
            int rg = 0;
            string nome = "";
            string designação = "";
            string telefone = "";
            string endereço = "";
            double salario = 0;
            string data_de_contrato = "";
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite o nome:"<<endl;
            cout<<"-----------------------------------------"<<endl;
             getline(cin, nome);
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite o rg:"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cin >> rg;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite a designação:"<<endl;
            cout<<"-----------------------------------------"<<endl;
             getline(cin, designação);
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite o telefone:"<<endl;
            cout<<"-----------------------------------------"<<endl;
             getline(cin, telefone);
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite o endereço:"<<endl;
            cout<<"-----------------------------------------"<<endl;
            getline(cin, endereço);
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite o salario:"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cin >> salario;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite a data de contrato:"<<endl;
            cout<<"-----------------------------------------"<<endl;
            getline(cin, data_de_contrato);

            biblioteca.adicionarFuncionario(new Funcionario(rg,nome,designação,telefone,endereço,salario,data_de_contrato));
          }
          else if(op2 == 2){
            biblioteca.imprimirFuncionarios();
            cout<<"-----------------------------------------"<<endl;
            cout<<"Digite qualquer coisa para continuar"<<endl;
            cout<<"-----------------------------------------"<<endl;
            string p;
             getline(cin, p); 
          }
          else if(op2 ==3){
            string nome;
            cout<<"-----------------------------------------"<<endl;
            cout<<"digite Nome Completo:"<<endl;
            cout<<"-----------------------------------------"<<endl;
             getline(cin, nome);
             if(biblioteca.removerFuncionario(nome)){cout<<"Funcionário removido"<<endl;}
             else{cout<<"Funcionário não encontrado"<<endl;}
             cout<<"-----------------------------------------"<<endl;
            cout<<"Digite qualquer coisa para continuar"<<endl;
            cout<<"-----------------------------------------"<<endl;
            string p;
             getline(cin, p); 
          }
          else{
            break;
          }
      }
    }
    }
    else if(op == 2){
      while(true){
        system("clear");
        cout<<"-----------------------------------------"<<endl;
        cout<<"Digite 1 para realizar emprestimo do livro; \nDigite 2 para exibir a lista de livros;\nDigite 3 para adicionar livro \nDigite 4 para devolver livro \nDigite 5 para adicionar um cliente; \nDigite 6 para exibir todos os clientes; \nDigite 7 para remover um Cliente \nDigite 8 para remover um Livro \nDigite 9 para voltar a tela de login"<<endl;
        cout<<"-----------------------------------------"<<endl;
        int op3;
        cin >> op3;
        cin.ignore(10000,'\n'); 
        if(op3 == 1){
          system("clear");
          string nomeLivro;
          string nomeCliente;
          string dataIn;
          string dataFin;
          cout<<"-----------------------------------------"<<endl;
          cout<<"nome do livro: "<<endl;
           getline(cin, nomeLivro);
          cout<<"-----------------------------------------"<<endl;
          cout<<"nome do cliente: " << endl;
           getline(cin, nomeCliente);
          cout<<"-----------------------------------------"<<endl;
          cout<<"data de emprestimo: " << endl;
           getline(cin, dataIn);
          cout<<"-----------------------------------------"<<endl;
          cout<<"data de entrega: " << endl;
           getline(cin, dataFin);; 
          cout<<"-----------------------------------------"<<endl;
          if(biblioteca.realizarEmprestimo(nomeLivro, dataIn, dataFin, nomeCliente)){
            cout<<"Emprestimo realizado com sucesso"<<endl;
          }else{
            cout<<"Falha ao realizar emprestimo"<<endl;
          }
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar:" << endl;
          string tr;
          getline(cin, tr);
        }
        else if(op3 == 2){
          system("clear");
          biblioteca.imprimirLivros();
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar:" << endl;
          string tr;
          getline(cin, tr);
        }
        else if(op3 == 3){
          system("clear");
          cout<<"-----------------------------------------"<<endl;
          cout<< " Digite: \n 1-Documentario \n 2-Educacional \n 3-Ficção cientifica \n 4-infantil \n 5-Religioso \n 6-Romance \n 7-terror \n 8-Outro \n 9-sair" <<endl;
          cout<<"-----------------------------------------"<<endl;
          int tr;
          cin >> tr;
         cin.ignore(10000,'\n'); 
          if(tr == 1){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            string topico;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Topico:"<<endl;
            getline(cin, topico);
            
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l = new Documentario (nomeLivro,ano,autor,editora,numPaginas,dis,topico);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 2){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            string publicAlv;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Publico alvo:"<<endl;
            getline(cin, publicAlv);
            
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l = new Educacional (nomeLivro,ano,autor,editora,numPaginas,dis,publicAlv);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 3){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            int idade;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Idade minima:"<<endl;
            cin>>idade;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l = new Ficção (nomeLivro,ano,autor,editora,numPaginas,idade,dis);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 4){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            int idade;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin,editora);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Idade minima:"<<endl;
            cin>>idade;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l =  new Infantil (nomeLivro,ano,autor,editora,numPaginas,dis,idade);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 5){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            string religiao;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
             
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Religião alvo:"<<endl;
            getline(cin, religiao);
           
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l = new Religioso (nomeLivro,ano,autor,editora,numPaginas,dis,religiao);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 6){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            int idade;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Idade minima:"<<endl;
            cin>>idade;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            
            Livro *l = new Romance (nomeLivro,ano,autor,editora,numPaginas,dis,idade);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 7){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            int idade;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
            
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"Idade minima:"<<endl;
            cin>>idade;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Terror (nomeLivro,ano,autor,editora,numPaginas,dis,idade);
            Livro *l = new Terror (nomeLivro,ano,autor,editora,numPaginas,dis,idade);
            biblioteca.adicionarLivro(l);
          }
          else if(tr == 8){
            system("clear");
            string nomeLivro;
            int ano;
            string autor;
            string editora;
            int numPaginas;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Nome:"<<endl;
            getline(cin, nomeLivro);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"ano de lançamento:"<<endl;
            cin>>ano;
            cin.ignore(10000,'\n'); 
            cout<<"-----------------------------------------"<<endl;
            cout<<"autor:"<<endl;
            getline(cin, autor);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"Editora:"<<endl;
            getline(cin, editora);
           
            cout<<"-----------------------------------------"<<endl;
            cout<<"Numero de paginas:"<<endl;
            cin>>numPaginas;
            cin.ignore(10000,'\n');
            cout<<"-----------------------------------------"<<endl;
            cout<<"Deseja adicionar alguma especificação?\nDigite: \n1-Sim \n2-Não"<<endl;
            int R;
            cin>>R;
            cin.ignore(10000,'\n'); 
            if (R==1){
            int dis = 7;
            Livro *l = new Outro (nomeLivro,ano,autor,editora,numPaginas,dis);
            cout<<"-----------------------------------------"<<endl;
            string NE;
            string s;
            stringstream(k);
            int i;
            float c;
            k<<s;
            Outro* o;
            o = dynamic_cast<Outro*>((l));
            cout<<"Nome da especificação: "<<endl;
            getline(cin, NE);
           
            o->setNomedaesp(NE);
            cout<<"Especificação: "<<endl;
            getline(cin, s);
           
            if (k>>c){o->setesp(c);}
            else if (k>>i){o->setesp(i);}
            else{o->setesp(s);}
            cout<<"-----------------------------------------"<<endl;
            biblioteca.adicionarLivro(l);}
            else{
            cout<<"-----------------------------------------"<<endl;
            int dis = 7;
            Livro *l = new Outro (nomeLivro,ano,autor,editora,numPaginas,dis);
            biblioteca.adicionarLivro(l);}}
          
          else{
            break;
          }
        }
        else if(op3 == 4){
          system("clear");
          cout<<"-----------------------------------------"<<endl;
          cout<<"Nome do cliente:"<<endl;
          string nomCliente;
          getline(cin, nomCliente);
          cout<<"-----------------------------------------"<<endl;
          cout<<"nome do livro"<<endl;
          string nomLivro;
          getline(cin, nomLivro);
          cout<<"-----------------------------------------"<<endl;
          string ret = biblioteca.devolverEmprestimo(nomCliente, nomLivro);
          cout<< "Data limite de entrega: " + ret<<endl;
          if((ret != "Cliente não encontrado") && (ret != "Não encontrado") && (ret!="Livro não encontrado")){
            cout<<"-----------------------------------------"<<endl;
            cout<<"Houve atraso? \n 1-sim \n 2-não"<<endl;
            int h = 0;
            cin >> h;
            cin.ignore(10000,'\n'); 
            if(h == 1){
              stringstream print;
              print << biblioteca.CobrarMulta(nomCliente);
              cout<<"Multa cobrada de R$ " + print.str()<<endl;
            }
          }
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar"<<endl;
          cout<<"-----------------------------------------"<<endl;
          string p;
          getline(cin, p);
        }
        else if(op3 == 5){
          system("clear");
          int rg = 0;
          string nome = "";
          string designação = "";
          string telefone = "";
          string endereço = "";
          cout<<"-----------------------------------------"<<endl;
          cout<<"digite o nome:"<<endl;
          cout<<"-----------------------------------------"<<endl;
          getline(cin, nome);
          
          cout<<"-----------------------------------------"<<endl;
          cout<<"digite o rg:"<<endl;
          cout<<"-----------------------------------------"<<endl;
          cin >> rg;
          cin.ignore(10000,'\n'); 
          cout<<"-----------------------------------------"<<endl;
          cout<<"digite o telefone:"<<endl;
          cout<<"-----------------------------------------"<<endl;
          getline(cin, telefone);
          
          cout<<"-----------------------------------------"<<endl;
          cout<<"digite o endereço:"<<endl;
          cout<<"-----------------------------------------"<<endl;
          getline(cin, endereço);
          
          cout<<"-----------------------------------------"<<endl;
          biblioteca.adicionarCliente(new Cliente(rg,nome,telefone,endereço));
        }
        else if(op3 == 6){
          system("clear");
          cout<<"-----------------------------------------"<<endl;
          biblioteca.imprimirClientes();
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar"<<endl;
          cout<<"-----------------------------------------"<<endl;
          string p;
          getline(cin, p);
        }
        else if(op3 == 7){
          system("clear");
          string Nome;
          cout<<"-----------------------------------------"<<endl;
          cout<< "Digite o Nome completo : "<<endl;
          getline(cin,Nome);
          cout<<"-----------------------------------------"<<endl;
          if(biblioteca.removerCliente(Nome)){cout<<"Cliente Removido"<<endl;}
          else{cout<<"Cliente não encontrado"<<endl;}
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar"<<endl;
          cout<<"-----------------------------------------"<<endl;
          string p;
          getline(cin, p);
           
        }
        else if(op3 == 8){
          system("clear");
          string Nome;
          cout<<"-----------------------------------------"<<endl;
          cout<< "Digite o Nome da Obra : "<<endl;
          getline(cin,Nome);
          cout<<"-----------------------------------------"<<endl;
          biblioteca.removerLivro(Nome);
          cout<<"-----------------------------------------"<<endl;
          cout<<"Digite qualquer coisa para continuar"<<endl;
          cout<<"-----------------------------------------"<<endl;
          string p;
          getline(cin, p);
           
        }
        else{
          break;
        }
      }
    }
    else{
      system("clear");
      cout<<"──────▄▀▄─────▄▀▄\n─────▄█░░▀▀▀▀▀░░█▄\n─▄▄──█░░░░░░░░░░░█──▄▄\n█▄▄█─█░░▀░░┬░░▀░░█─█▄▄█"<<endl;
      cout<<"-----Volte sempre!-----"<<endl;
      break;
    }

  }
}