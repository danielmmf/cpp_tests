# cpp_tests
usando tdd no c++ linguagem dos fortes ... ;)

Ubuntu : sudo apt-get install libcppunit-dev

Windows (da trabalho) : https://www.badprog.com/eclipse-cppunit-installation




rodar essa linha


g++ -o testProduto Produto.cpp TestProduto.cpp -lcppunit

g++ -o testCliente Cliente.cpp TestCliente.cpp -lcppunit



depois essa


./testProduto

./testCliente


pra rodar o codigo:


 g++ -o main Produto.cpp Cliente.cpp main.cpp 

 ./main


