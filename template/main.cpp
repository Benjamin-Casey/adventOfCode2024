#include <iostream>
#include <fstream>
#include <string>

std::string lineText;

int main() {
    std::ifstream inputFile("example_input.txt");
    
    while (getline (inputFile, lineText)) {
        std::cout << lineText << std::endl;
    }
    
    inputFile.close();
    return 0;
}