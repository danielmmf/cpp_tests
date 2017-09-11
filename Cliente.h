#pragma once
#include<iostream>
#include<string>
#include <locale>
	
#ifndef CLIENTE_H__

#define CLIENTE_H__


using namespace std;

class Cliente{

	public:
		Cliente();
		~Cliente();
		int codigo;
		int getCodigo();
		bool setCodigo(int cod);
	private:
		int cod;
		char descricao;

};

//depois de assinar o metodo aqui , crie ele no arquivo cpp desse header

#endif
