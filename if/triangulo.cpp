#include <iostream>

int main() {
    double base, altura, area;

    std::cout << "Digite a base do triângulo: ";
    std::cin >> base;

    std::cout << "Digite a altura do triângulo: ";
    std::cin >> altura;

    area = (base * altura) / 2;

    std::cout << "A área do triângulo é: " << area << std::endl;

    return 0;
}