#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include "Cliente.h"

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class TestCliente : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCliente);
    CPPUNIT_TEST(testSetCodigo);
    CPPUNIT_TEST(testGetCodigo);
    CPPUNIT_TEST(testClienteSetName);
    CPPUNIT_TEST(testSetNome);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testSetCodigo(void);
    void testGetCodigo(void);
    void testClienteSetName(void); 
    void testSetNome(void);
private:

    Cliente *mTestObj;
};

//-----------------------------------------------------------------------------

void
TestCliente::testClienteSetName(void)
{
	
   // CPPUNIT_ASSERT(true == mTestObj->setCodigo(2));
}



//colocar novos testes aqui em cima !!! -> vai no Cliente e cria o metodo que vc vai chamar aqui

void
TestCliente::testSetCodigo(void)
{
    CPPUNIT_ASSERT(true == mTestObj->setCodigo(2));
}

void
TestCliente::testGetCodigo(void)
{
	mTestObj->setCodigo(2);//ele sempre reinicia o objeto , precisa setar o necessario
    CPPUNIT_ASSERT(2 == mTestObj->getCodigo());
}


void
TestCliente::testSetNome(void)
{
	string nome = "Cliente"; 
	string expected = "Cliente"; 
	mTestObj->setNome(nome);//ele sempre reinicia o objeto , precisa setar o necessario
    CPPUNIT_ASSERT(expected == mTestObj->getNome());
}

void TestCliente::setUp(void)
{
    mTestObj = new Cliente();
}

void TestCliente::tearDown(void)
{
    delete mTestObj;
}

//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( TestCliente );

int main(int argc, char* argv[])
{
    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;

    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);

    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener (&progress);

    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
    testrunner.run(testresult);

    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write ();

    // Output XML for Jenkins CPPunit plugin
    ofstream xmlFileOut("cppTestClienteResults.xml");
    XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}
