#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
public:
    Game();
    void init();
    void update();
    void render();
    bool isRunning();
private:
    bool running;
    void loadConfig(const std::string& configFile);
    void loadLevel(const std::string& levelFile);
};

#endif // GAME_H
