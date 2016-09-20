#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "Game.h"

class GameTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(GameTest);
  CPPUNIT_TEST(testAllGutter);
  CPPUNIT_TEST(testAllOne);
  CPPUNIT_TEST(testSpare);
  CPPUNIT_TEST(testStrike);
  CPPUNIT_TEST_SUITE_END();
public:
  void setUp();
  void tearDown();
protected:
  void testAllGutter();
  void testAllOne();
  void testSpare();
  void testStrike();
private:
  Game *game;
  void rollMany(int number, int pin);
};

void GameTest::setUp()
{
  game = new Game();
}

void GameTest::tearDown()
{
  delete game;
}

void GameTest::rollMany(int number, int pin)
{
  for (int i = 0; i < number; i++) {
    game->roll(pin);
  }
}

void GameTest::testAllGutter()
{
  rollMany(20, 0);
  CPPUNIT_ASSERT_EQUAL(0, game->score());
}

void GameTest::testAllOne()
{
  rollMany(20, 1);
  CPPUNIT_ASSERT_EQUAL(20, game->score());
}

void GameTest::testSpare()
{
  game->roll(5);
  game->roll(5);
  game->roll(3);
  rollMany(17, 0);
  CPPUNIT_ASSERT_EQUAL(16, game->score());
}

void GameTest::testStrike()
{
  game->roll(10);
  game->roll(5);
  game->roll(3);
  rollMany(16, 0);
  CPPUNIT_ASSERT_EQUAL(26, game->score());
}
CPPUNIT_TEST_SUITE_REGISTRATION( GameTest );
