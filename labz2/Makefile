CXX = clang++
CXXFLAGS = -std=c++23 -Wall -Wextra -Wpedantic -g -O0

SRC = $(wildcard *.cpp)
BIN = lab

all: $(BIN)

$(BIN): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN) $(LDFLAGS)

run: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)
