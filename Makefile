CC=g++
CFLAGS=-c -g -Wall -std=c++11
INCLUDE=-Iinclude
LIBS=-L/usr/lib64 -lSDL2
SRC_FILES=$(wildcard src/*.cpp)
OBJ_FILES=$(patsubst  src/%.cpp, obj/%.o, $(SRC_FILES))
EXE=exe

$(EXE): $(OBJ_FILES)
	$(CC) $(LIBS) -o $@ $^

obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<

clean:
	rm -f exe $(OBJ_FILES)
