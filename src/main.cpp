#include <iostream>
#include "Game.h"
#include "BoyJackUtils.h"
#include "BoyJackLib.h"  // Подключаем библиотеку

int main() {
    std::cout << "Welcome to BoyJack Games with BoyJackLib!" << std::endl;

    // Оптимизация игровых процессов
    optimizeGameProcess();

    // Загрузка игрового файла
    loadGameFile("assets/config/game_config.json");

    // Попытка подключения к серверу
    if (connectToServer("192.168.1.1")) {
        std::cout << "Successfully connected to the server!" << std::endl;
    } else {
        std::cout << "Failed to connect to the server." << std::endl;
    }

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
