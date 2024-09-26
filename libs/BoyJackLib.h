#ifndef BOYJACKLIB_H
#define BOYJACKLIB_H

// Функция для оптимизации игровых процессов
void optimizeGameProcess();

// Функция для работы с файлами (например, загрузка ресурсов)
void loadGameFile(const char* filename);

// Функция для сетевого взаимодействия (например, подключение к серверу)
bool connectToServer(const char* serverAddress);

#endif // BOYJACKLIB_H
