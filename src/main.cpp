#include <iostream>
#include "Game.h"
#include "BoyJackUtils.h"

int main() {
    std::cout << "Welcome to BoyJack Games!" << std::endl;

    // Инициализация игры
    Game game;
    game.init();

    // Основной игровой цикл
    while (game.isRunning()) {
        game.update();
        game.render();
    }

    std::cout << "Exiting BoyJack Games..." << std::endl;
    return 0;
}
