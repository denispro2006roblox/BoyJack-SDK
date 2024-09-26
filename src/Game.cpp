#include "Game.h"
#include <iostream>

Game::Game() {
    this->running = true;
}

void Game::init() {
    std::cout << "Game Initialized" << std::endl;
    // Загрузка конфигурации и ресурсов
    loadConfig("assets/config/game_config.json");
    loadLevel("assets/bjg/levels.bjg");
}

void Game::update() {
    // Обновление логики игры
    std::cout << "Game Updating..." << std::endl;
}

void Game::render() {
    // Рендеринг графики игры
    std::cout << "Rendering game frame..." << std::endl;
}

bool Game::isRunning() {
    return this->running;
}

void Game::loadConfig(const std::string& configFile) {
    // Загрузка конфигурации из JSON файла
    std::cout << "Loading configuration from " << configFile << std::endl;
}

void Game::loadLevel(const std::string& levelFile) {
    // Загрузка уровня из файла BJG
    std::cout << "Loading level from " << levelFile << std::endl;
}
