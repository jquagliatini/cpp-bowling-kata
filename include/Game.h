#ifndef _GAME_H_
#define _GAME_H_

class Game {
private:
  int total;
public:
  Game();
  ~Game();
  void roll(int pin);
  int score();

};

#endif // _GAME_H_
