#include "Game.h"

Game::Game()
  : total(0)
{ }

Game::~Game()
{ }

void Game::roll(int pin) {
  total.push_back(pin);
}

bool Game::isSpare(int frame) {
  return total[frame] + total[frame + 1] == 10;
}

int Game::score() {
  int score = 0;
  for (int i = 0; i < total.size(); i++) {
    if (isSpare(i)) {
      score += total[i + 2];
    }
    score += total[i];
  }
  return score;
}
