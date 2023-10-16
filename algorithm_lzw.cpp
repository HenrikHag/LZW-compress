#include "algorithm_lzw.hpp"

void lzw_compress(std::ifstream& input_file,std::ofstream& output_file) {
    int input_file_size = input_file.tellg();
    std::cout << "Original filesize = " << input_file_size << "\n";
    input_file.seekg(0, std::ios::beg);
    std::string input_text;
    if (input_file.is_open()) {
        while (getline (input_file,input_text)) {
            std::cout << input_text << "\n";
            // TODO: Read whole file at once with \n chars into input_text
        }
    }
    std::vector<int> output_text = lzw_compress(input_text, input_file_size);
    // Write output_text to file
    // Use Huffmann coding
    return;
}

std::vector<int> lzw_compress(std::string input_string, int input_size) {
    // compression
    std::map<std::string,int> lzw_dict;
    std::string chars_in_dict;
    std::vector<int> result;
    // int len_uncompressed_data;

    // initialize
    for (int i=0; i<256; i++) {
        std::string ch = "";
        ch += char(i);
        lzw_dict[ch] = i;
        // std::cout << ch;
    }

    std::string section = "";
    int next_code = 256;
    for (int i=0; i<input_size; i++) {
        section = section + input_string[i];
        if (lzw_dict.find(section)==lzw_dict.end()) {
            // Not found in dict
            lzw_dict[section] = next_code;
            next_code++;
        }
        // std::cout << lzw_dict[std::to_string(i)];
    }

    return result;
}

void lzw_decompress(std::ifstream& input_file,std::ofstream& output_file) {
    std::cout << "Not yet implemented";
    return;
}
