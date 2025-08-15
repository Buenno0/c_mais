#include <iostream>

int main() {
    double fahrenheit, celsius;
    std::cout << "Digite a temperatura em graus Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    std::cout << "Temperatura em graus Celsius: " << celsius << std::endl;
    return 0;
}