#include "Cliente.h"

bool Cliente::setCodigo(int cod){
	try {
    	this->cod = cod;
    	return true;
	} catch (const std::overflow_error& e) {
	    // this executes if f() throws std::overflow_error (same type rule)
	    return false;
	} catch (const std::runtime_error& e) {
	    // this executes if f() throws std::underflow_error (base class rule)
	    return false;
	} catch (const std::exception& e) {
	    // this executes if f() throws std::logic_error (base class rule)
	    return false;
	}
}

bool Cliente::setNome(string nome){
	try {
    	this->nome = nome;
    	return true;
	} catch (const std::overflow_error& e) {
	    // this executes if f() throws std::overflow_error (same type rule)
	    return false;
	} catch (const std::runtime_error& e) {
	    // this executes if f() throws std::underflow_error (base class rule)
	    return false;
	} catch (const std::exception& e) {
	    // this executes if f() throws std::logic_error (base class rule)
	    return false;
	}
}


bool Cliente::setCpf(string cpf){
	try {
    	this->cpf = cpf;
    	return true;
	} catch (const std::overflow_error& e) {
	    // this executes if f() throws std::overflow_error (same type rule)
	    return false;
	} catch (const std::runtime_error& e) {
	    // this executes if f() throws std::underflow_error (base class rule)
	    return false;
	} catch (const std::exception& e) {
	    // this executes if f() throws std::logic_error (base class rule)
	    return false;
	}
}




int Cliente::getCodigo(){
   return this->cod;
}

string Cliente::getNome(){
   return this->nome;
}


string Cliente::getCpf(){
   return this->cpf;
}

Cliente::Cliente(){

}


Cliente::~Cliente(){
}
