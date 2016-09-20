#include <iostream>
#include <string>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestRunner.h>

int main(int argc, char *argv[]) {
  CPPUNIT_NS::Test *test =
    CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();
  CPPUNIT_NS::TextTestRunner runner;
  runner.addTest(test);

    bool wasSuccessful = runner.run();
    return wasSuccessful ? 0 : 1;
}
