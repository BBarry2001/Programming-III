#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void appendToFile(const std::string& userInput) {
    std::ofstream file("CSC450_CT5_mod5.txt", std::ios::app); // Open in append mode
    if (file.is_open()) {
        file << userInput << std::endl;
        file.close();
    } else {
        std::cerr << "Failed to open the file for appending." << std::endl;
    }
}

void reverseContentsAndSave() {
    std::ifstream inputFile("CSC450_CT5_mod5.txt");
    std::string fileContents((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    std::reverse(fileContents.begin(), fileContents.end());

    std::ofstream outputFile("CSC450-mod5-reverse.txt");
    if (outputFile.is_open()) {
        outputFile << fileContents;
        outputFile.close();
    } else {
        std::cerr << "Failed to open the file for writing reversed contents." << std::endl;
    }
}

int main() {
    std::string userData;
    std::cout << "Enter data to append to the file: ";
    std::getline(std::cin, userData); // Get user input including spaces

    appendToFile(userData); // Append user input to the file
    reverseContentsAndSave(); // Reverse contents and save to another file

    std::cout << "Data appended and reversed successfully." << std::endl;

    return 0;
}
