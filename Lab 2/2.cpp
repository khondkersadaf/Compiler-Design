#include <iostream>
#include <fstream>
#include <string>

bool isValidKeyword(const std::string& keyword) {

    std::string validKeywords[] = { "int", "float", "char", "if", "for", "while" };
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);


    for (int i = 0; i < numValidKeywords; i++) {
        if (keyword == validKeywords[i]) {
            return true;
        }
    }

    return false;
}

int main() {
    int i = 0;
    std::string Arr[10];
    std::string extractor;

    std::ifstream ReadFile;
    ReadFile.open("keywords.txt");

    if (!ReadFile) {
        std::cout << "File not found" << std::endl;
        return 0;
    }

    while (ReadFile >> extractor && i < 10) {
        Arr[i] = extractor;
        i++;
    }

    ReadFile.close();

    std::cout << "Valid Keywords:" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (isValidKeyword(Arr[i])) {
            std::cout << Arr[i] << std::endl;
        }
    }

    std::cout << "Invalid Keywords:" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (!isValidKeyword(Arr[i])) {
            std::cout << Arr[i] << std::endl;
        }
    }

    return 0;
}
