#pragma once
#include<iostream>
#include<string>
#include <locale>
	
#ifndef PRODUTO_H__

#define PRODUTO_H__


using namespace std;

class Produto{

	public:
		Produto();
		~Produto();
		int codigo;
		int getCodigo();
		bool getAmorzinho();
		bool setCodigo(int cod);
	private:
		int cod;

};

//depois de assinar o metodo aqui , crie ele no arquivo cpp desse header

#endif
