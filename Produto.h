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
		void setCodigo(int cod);
	private:
		int cod;

};

#endif
