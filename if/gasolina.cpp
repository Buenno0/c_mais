#include <iostream>
using namespace std;

int main() {
    double valorLitro, distancia, consumoMedio;
    
    cout << "Digite o valor do litro de gasolina: ";
    cin >> valorLitro;
    
    cout << "Digite a distancia total percorrida (em Km): ";
    cin >> distancia;
    
    cout << "Digite o consumo medio (Km por litro): ";
    cin >> consumoMedio;
    
    double litrosGastos = distancia / consumoMedio;
    double custoTotal = litrosGastos * valorLitro;
    
    cout << "Quantidade total de litros gastos: " << litrosGastos << endl;
    cout << "Custo total com combustivel: R$ " << custoTotal << endl;
    
    return 0;
}