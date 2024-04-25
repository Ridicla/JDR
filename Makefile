CC = g++
CFLAGS = -std=c++11

SRC_DIR = src
BIN_DIR = bin
LIB_DIR = lib

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
EXEC = $(BIN_DIR)/JDR.exe
LIBS = $(wildcard $(LIB_DIR)/*.h)
$(EXEC): $(OBJS)

	$(CC) $(CFLAGS) $(SRCS) $(LIBS) -o $(EXEC)

clean:
	del /q bin\* 
