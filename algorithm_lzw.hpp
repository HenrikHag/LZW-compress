#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

// #define TESTING

// Function to compress an input file via the LZW compression algorithm and writing result to output file
void lzw_compress(std::ifstream &input_file, std::ofstream &output_file);
// Function to compress a string via the LZW compression algorithm
// Returns the vector of codes according to the LZW dictionary
std::vector<int> lzw_compress(std::string input_string, int input_string_length);
// Function to decompress a file compressed via the LZW compression algorithm
void lzw_decompress(std::ifstream &input_file, std::ofstream &output_file);
