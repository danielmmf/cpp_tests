#include <iostream>
#include <string>
#include <list>
#include "Produto.h"
#include "Cliente.h"

using namespace std;

int cod ,vetCod[1000], i;
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
	
	cout << "Digite o nome: " << endl;
	cin >> nome;
	cliente->setNome(nome);
	vetNome[i] = nome;
    cout << cliente->getCodigo();
    cout << cliente->getNome();
}


int main(){
    //inserir_produto();
    inserir_cliente();
    

    return 0;
}


	
