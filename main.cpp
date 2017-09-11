#include <iostream>
#include <string>
#include <list>
#include "Produto.h"

using namespace std;

int cod ,vetCod[1000], i;
string nome, cpf , vetNome[1000], vetCpf[1000];

void inserir_produto(){
	Produto * produto = new Produto;
    cout << produto->getCodigo();
    cout << produto->getAmorzinho();
}


int main(){
    //inserir_produto();

    return 0;
}


	
