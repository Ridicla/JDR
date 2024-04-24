CC = g++
CFLAGS = -std=c++11

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
EXEC = $(BIN_DIR)/JDR.exe

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC)

clean:
	del /q bin\* 
