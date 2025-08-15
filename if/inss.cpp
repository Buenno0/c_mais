#include <iostream>

int main() {
    double horas_trabalhadas, valor_hora, salario_bruto, salario_liquido;
    const double INSS_PERCENTUAL = 0.12;

    std::cout << "Informe o total de horas trabalhadas: ";
    std::cin >> horas_trabalhadas;

    std::cout << "Informe o valor da hora aula: ";
    std::cin >> valor_hora;

    salario_bruto = horas_trabalhadas * valor_hora;
    salario_liquido = salario_bruto * (1 - INSS_PERCENTUAL);

    std::cout << "Salario bruto: R$ " << salario_bruto << std::endl;
    std::cout << "Salario liquido: R$ " << salario_liquido << std::endl;

    return 0;
}