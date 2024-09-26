CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = -Llibs -lBoyJackLib  # Подключаем статическую библиотеку BoyJackLib.a

SRC = src/main.cpp src/Game.cpp
OBJ = $(SRC:.cpp=.o)

EXEC = BoyJackGame

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJ) $(EXEC)
