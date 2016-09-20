#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "Game.h"

class GameTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(GameTest);
  CPPUNIT_TEST(testAllGutter);
  CPPUNIT_TEST(testAllOne);
  CPPUNIT_TEST_SUITE_END();
public:
  void setUp();
  void tearDown();
protected:
  void testAllGutter();
  void testAllOne();
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

void GameTest::testAllGutter()
{
  for (int i = 0; i < 20; i++) {
    game->roll(0);
  }
  CPPUNIT_ASSERT_EQUAL(0, game->score());
}

void GameTest::testAllOne()
{
  for (int i = 0; i < 20; i++) {
    game->roll(1);
  }
  CPPUNIT_ASSERT_EQUAL(20, game->score());
}

CPPUNIT_TEST_SUITE_REGISTRATION( GameTest );
