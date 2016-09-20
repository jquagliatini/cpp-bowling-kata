#ifndef _GAME_H_
#define _GAME_H_

#include <vector>
class Game {
private:
  std::vector<int> total;
  bool isSpare(int frame);
public:
  Game();
  ~Game();
  void roll(int pin);
  int score();

};

#endif // _GAME_H_
