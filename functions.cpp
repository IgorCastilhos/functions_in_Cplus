//
// Created by igorc on 8/15/2023.
//

// ### Definindo uma Função
//
// O formato geral para definir uma função em C++ é:
#include <iostream>
using namespace std;

// Funtion Prototype
int multiplyNumbers(int x, int y);

// Function to add two numbers
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(num1, num2); // Calling the function
    cout << "The sum is: " << result << '\n';
    int num3 = 3, num4 = 7;
    int result2 = multiplyNumbers(num3, num4); // Calling the function
    cout << "The product is: " << result2 << endl;
    return 0;
}

// Function definition
int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}
