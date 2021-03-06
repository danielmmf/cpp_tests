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

#include "Produto.h"

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class TestProduto : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestProduto);
    CPPUNIT_TEST(testSetCodigo);
    CPPUNIT_TEST(testGetCodigo);
    CPPUNIT_TEST(testKimmyLinda);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testSetCodigo(void);
    void testGetCodigo(void);
    void testKimmyLinda(void);

private:

    Produto *mTestObj;
};

//-----------------------------------------------------------------------------

void
TestProduto::testKimmyLinda(void)
{
    CPPUNIT_ASSERT(true == mTestObj->getAmorzinho());
}



//colocar novos testes aqui em cima !!! -> vai no Produto e cria o metodo que vc vai chamar aqui

void
TestProduto::testSetCodigo(void)
{
    CPPUNIT_ASSERT(true == mTestObj->setCodigo(2));
}

void
TestProduto::testGetCodigo(void)
{
    CPPUNIT_ASSERT(10 == mTestObj->getCodigo());
}

void TestProduto::setUp(void)
{
    mTestObj = new Produto();
}

void TestProduto::tearDown(void)
{
    delete mTestObj;
}

//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( TestProduto );

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
    ofstream xmlFileOut("cppTestProdutoResults.xml");
    XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}