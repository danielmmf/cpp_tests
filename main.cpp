#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include "Produto.h"
#include "Cliente.h"

using namespace std;

int cod ,vetCod[1000], i , opt;
string nome, cpf , vetNome[1000], vetCpf[1000];




void inserir_produto(){
	Produto * produto = new Produto;
    cout << produto->getCodigo();
    cout << produto->getAmorzinho();
}

void inserir_cliente(){
	Cliente * cliente = new Cliente;
	cout << "Digite o codigo: " << endl;
	cin >> cod;
	cliente->setCodigo(cod);
	vetCod[i] = cod;
	
	cout << "Digite o nome: " << endl;
	cin >> nome;
	cliente->setNome(nome);
	vetNome[i] = nome;
	
	cout << "Digite o Cpf: " << endl;
	cin >> cpf;
	cliente->setCpf(cpf);
	vetCpf[i] = cpf;
	
	cout << "Dados Inseridos: "<< endl;
    cout << "Codigo: "<< cliente->getCodigo()<< endl;
    cout << "Nome: "<< cliente->getNome()<< endl;
    cout << "Cpf: "<< cliente->getCpf()<< endl;
    cout << "====================== "<< endl;
    i++;

}

int procurarNome(){
	cout << "Digite o nome da Pessoa" << endl;
	cin >> nome;
	for(i = 0 ; i < 1000 ; i++){
		if(vetNome[i] == nome){
			cout << "Achamos o usuario de nome "<< vetNome[i] << endl;
			cout << "Achamos o usuario com o codigo "<< vetCod[i] << endl;
			cout << "Achamos o usuario com o Cpf "<< vetCpf[i] << endl;
			cout << "====================== "<< endl;
			return vetCod[i];
		}
	}
	cout << "Nao encontramos ninguem"<< endl;

}

void ListarClientes(){
	cout << "Clientes Inseridos no sistema" << endl;
	for(i = 0 ; i < 1000 ; i++){
		if(vetNome[i] != ""){
			cout << "Achamos o usuario de nome "<< vetNome[i] << endl;
			cout << "Achamos o usuario com o codigo "<< vetCod[i] << endl;
			cout << "Achamos o usuario com o Cpf "<< vetCpf[i] << endl;
			cout << "====================== "<< endl;
		}
	}

}

void menu(){
	cout << "Olá , o que deseja fazer ?"<< endl;
	cout << "1 - Inserir cliente:"<< endl;
	cout << "2 - Buscar cliente:"<< endl;
	cout << "3 - Listar clientes :"<< endl;
	cout << "0 - Sair"<< endl;
	cout << "====================== "<< endl;
    //inserir_produto();
    cin >> opt;
    
    switch(opt){
		case 1:
			inserir_cliente();
		break;
		case 2:
			procurarNome();
		break;
		case 3:
			ListarClientes();
		break;
		case 0:
			exit(0);
		break;
	}
	menu();
}

int main(){
    menu();
   
    return 0;
}


	
