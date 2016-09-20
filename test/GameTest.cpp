#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "Game.h"

class GameTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(GameTest);
  CPPUNIT_TEST_SUITE_END();
public:
  void setUp();
  void tearDown();
private:
  Game *game;
};

void GameTest::setUp()
{
  game = new Game();
}

void GameTest::tearDown()
{
  delete game;
}

CPPUNIT_TEST_SUITE_REGISTRATION( GameTest );
