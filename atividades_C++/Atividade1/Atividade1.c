#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Ler dois números do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Verificar e imprimir o maior número
    if (num1 > num2) {
        cout << "O maior número é: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "O maior número é: " << num2 << endl;
    } else {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}
