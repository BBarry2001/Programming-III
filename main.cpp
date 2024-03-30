#include <iostream>

int main() {
    // Declare variables for user input
    int num1, num2, num3;
    
    // Ask user to enter three integer values
    std::cout << "Enter three integer values: ";
    std::cin >> num1 >> num2 >> num3;
    
    // Create integer pointers and allocate dynamic memory
    int* ptr1 = new int(num1);
    int* ptr2 = new int(num2);
    int* ptr3 = new int(num3);
    
    // Display the contents of the variables and pointers
    std::cout << "Variable 1: " << num1 << ", Pointer 1: " << *ptr1 << std::endl;
    std::cout << "Variable 2: " << num2 << ", Pointer 2: " << *ptr2 << std::endl;
    std::cout << "Variable 3: " << num3 << ", Pointer 3: " << *ptr3 << std::endl;
    
    // Free the allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
