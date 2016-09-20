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

bool Game::isStrike(int frame) {
  return total[frame] == 10;
}

int Game::score() {
  int score = 0;
  int frame = 0;
  for (int i = 0; i < 10; i++) {
    if (isStrike(frame)) {
      score += 10 + total[frame + 1] + total[frame + 2];
      frame++;
    } else {
      if (isSpare(frame)) {
        score += total[frame + 2];
      }
      score += total[frame] + total[frame + 1];
      frame += 2;
    }
  }
  return score;
}
