# Compiler
CC = g++
# Compiler flags
CCFLAGS = -std=c++11 -Wall -O0

# Def source and output
SRCS = lzw_compress.cpp algorithm_lzw.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = algorithm_lzw.hpp
OUTPUT = lzw_compress

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	$(CC) $(CCFLAGS) -o $(OUTPUT) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OUTPUT)
