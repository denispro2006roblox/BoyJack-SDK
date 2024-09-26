#include "Game.h"
#include <cassert>

void testGameInit() {
    Game game;
    game.init();
    assert(game.isRunning() == true);
}

int main() {
    testGameInit();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
