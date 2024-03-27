#include <iostream>
#include <string>

int main() {
    // Declaration of string variables
    std::string firstString, secondString, concatenatedString;
    
    // Loop three times for three sets of string inputs
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Iteration " << i << ":" << std::endl;
        
        // Prompt and read the first string
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);
        
        // Prompt and read the second string
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);
        
        // Concatenate and display the result
        concatenatedString = firstString + secondString;
        std::cout << "The concatenated string is: " << concatenatedString << std::endl << std::endl;
    }
    
    return 0;
}
