#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string extractor;
    std::string concatenatedOutput;

    std::ifstream ReadFile;
    ReadFile.open("sentence.txt");

    if (!ReadFile) {
        std::cout << "File not found" << std::endl;
        return 0;
    }

    while (ReadFile >> extractor) {
        concatenatedOutput += extractor;
    }

    ReadFile.close();

    std::cout << "Concatenated Output: " << concatenatedOutput << std::endl;

    return 0;
}

