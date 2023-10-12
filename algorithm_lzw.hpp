#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

// #define TESTING

// File to be compressed / decompressed from
// std::ifstream input_file;
// Resultant file from a compression / decompression
// std::ofstream output_file;
// Length of `input_file`
// int input_file_length;

// Function to compress via the LZW compression algorithm
void lzw_compress(std::ifstream &input_file, std::ofstream &output_file);
// Function to decompress a file compressed via the LZW compression algorithm
void lzw_decompress(std::ifstream &input_file, std::ofstream &output_file);
