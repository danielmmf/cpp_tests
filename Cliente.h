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
		bool setNome(string nome);
		bool setCpf(string cpf);
		string getNome();
		string getCpf();
		Cliente procurarNome(string nome);
	private:
		int cod;
		string nome;
		string cpf;
		char descricao;

};

//depois de assinar o metodo aqui , crie ele no arquivo cpp desse header

#endif
