#include <iostream>
using namespace std;

int main() {
    double A, B;
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Soma: " << (A + B) << endl;
    cout << "Subtracao: " << (A - B) << endl;
    cout << "Multiplicacao: " << (A * B) << endl;
    if (B != 0) {
        cout << "Divisao: " << (A / B) << endl;
    } else {
        cout << "Divisao: Erro (divisao por zero)" << endl;
    }

    return 0;
}