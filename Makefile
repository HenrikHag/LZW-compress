CC = g++

all: program

program: lzw_compress
		$(CC) -O0 -std=c++11 lzw_compress.cpp -o lzw_compress