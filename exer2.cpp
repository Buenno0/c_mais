#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    double salario, novo_salario;
    double percentual_reajuste;

    for (int i = 0; i < 8; i++){
        cout << "digite o nome do funionario" << i + 1 << ": ";
        cin >> nome;

        cout << "digite o salario do funionario" << i + 1 << ": ";
        cin >> salario;

        if (salario <= 1550.00){
            percentual_reajuste = 0.15;
        }else if (salario <= 3000.00){
            percentual_reajuste = 0.10;
        }else{
            percentual_reajuste = 0.05;
        }

        novo_salario = salario * (1 + percentual_reajuste);

        cout << "Funcionario: "<< nome << endl;
        cout << "Salario original: "<< salario << endl;
        cout << "Novo salario: "<< novo_salario << endl;

        }
        return 0;
        }

    

