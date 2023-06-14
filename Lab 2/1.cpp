#include <iostream>
#include <fstream>

int main() {
    int i = 0;
    float Array[8];
    float extractor;

    std::ifstream ReadFile;
    ReadFile.open("float.txt");

    if (!ReadFile) {
        std::cout << "File not found" << std::endl;
        return 0;
    }

    while (ReadFile >> extractor && i < 8) {
        Array[i] = extractor;
        i++;
    }

    ReadFile.close();

    for (int i = 0; i < 8; i++) {
        std::cout << "Array[" << i << "] = " << Array[i] << std::endl;
    }


    float sum = 0.0;
    for (int i = 0; i < 8; i++) {
        sum += Array[i];
    }
    float average = sum / 8;


    float minimum = Array[0];
    for (int i = 1; i < 8; i++) {
        if (Array[i] < minimum) {
            minimum = Array[i];
        }
    }


    float maximum = Array[0];
    for (int i = 1; i < 8; i++) {
        if (Array[i] > maximum) {
            maximum = Array[i];
        }
    }


    std::cout << "Average: " << average << std::endl;
    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;

    return 0;
}
