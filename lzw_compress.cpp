#include "algorithm_lzw.hpp"
#include "algorithm_lzw.cpp"


std::string const how_to_use = "To use: lzw <command> <filename>\ncommands:\n'-c' to compress\n'-d' to decompress";

int main(int argc, char const *argv[])
{
    
    #ifdef TESTING

        lzw_compress(input_file, output_file);
    #else
    if (argc == 3) {
        if (std::string(argv[1]) == "-c") { // Compressing
            // File handling
            std::ifstream input_file (std::string(argv[2]),std::ios::in|std::ios::ate);
            std::string const output_file_name = std::string(argv[2])+".lzw";
            std::ofstream output_file (output_file_name,std::ios::out|std::ios::binary|std::ios::trunc); // read over existing file
            
            if (!input_file.is_open() || !output_file.is_open()) {
                std::cerr << "Failed to open file: " << argv[2] << std::endl;
                return -1;
            }

            std::cout << "Compressing '" << std::string(argv[2]) << "' using the LZW algorithm\n";
            lzw_compress(input_file, output_file);

            input_file.close(); output_file.close();
        } else if (std::string(argv[1]) == "-d") { // Decompressing
            std::ifstream input_file (std::string(argv[2]),std::ios::in|std::ios::binary|std::ios::ate);
            int length = std::string(argv[2]).length();
            std::string const output_file_name = std::string(argv[2]).substr(0,length-4);
            std::ofstream output_file (output_file_name,std::ios::out|std::ios::trunc);
            
            std::cout << "Decompressing '" << std::string(argv[2]) << "' using the LZW algorithm\n";
            // lzw_decompress(input_file, output_file);

            input_file.close(); output_file.close();
        } else {
            std::cout << "Expected '-c' or '-d'";
            return -1;
        }
    } else {
        std::cout << how_to_use << '\n';
        return -1;
    }
    
    #endif
    return 0;
}