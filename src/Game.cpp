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
    score += total[i];
  }
  return score;
}
