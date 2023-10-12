#include "algorithm_lzw.hpp"

void lzw_compress(std::ifstream& input_file,std::ofstream& output_file) {
    // compression
    std::map<std::string,int> lzw_dict;
    std::string chars_in_dict;
    std::vector<std::string> result;
    // int len_uncompressed_data;

    // initialize
    for (int i=0; i<256; i++) {
        std::string ch = "";
        ch += char(i);
        lzw_dict[ch] = i;
        // std::cout << ch;
    }
    
    std::cout << "Original filesize = " << input_file.tellg() << "\n";

    // for (int i=0; i<input_file_length; i++)
    // std::cout << "Aight\n";
    // for (int i=0; i<len_uncompressed_data; i++) {
        // lzw_dict[char(i)] = i;
        // std::cout << lzw_dict[std::to_string(i)];
    // }
    // lzw_dict["aa"] = 3;
    // std::cout << ;
    return;
}

void lzw_decompress(std::ifstream& input_file,std::ofstream& output_file) {
    std::cout << "Not yet implemented";
    return;
}
