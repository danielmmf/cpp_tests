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


int Cliente::getCodigo(){
   return 10;
}

Cliente::Cliente(){

}


Cliente::~Cliente(){
}