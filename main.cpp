#include <iostream>
#include <string>
#include <list>
#include "Produto.h"


int main(){
    Produto * produto = new Produto;

    cout << produto->getCodigo();
    cout << produto->getAmorzinho();

    return 0;
}