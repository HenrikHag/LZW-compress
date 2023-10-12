CC = g++

all: program

program: lzw_compress
		$(CC) -Wall -O0 -std=c++11 algorithm_lzw.cpp lzw_compress.cpp -o lzw_compress
