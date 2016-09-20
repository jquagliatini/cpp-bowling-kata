#include "Game.h"

Game::Game()
  : total(0)
{ }

Game::~Game()
{ }

void Game::roll(int pin) {
  total.push_back(pin);
}


int Game::score() {
  int score = 0;
  for (int i = 0; i < total.size(); i++) {
    if (total[i] + total[i + 1] == 10) {// spare
      score += total[i + 2];
    }
    score += total[i];
  }
  return score;
}
