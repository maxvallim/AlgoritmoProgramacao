#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Ler dois n�meros do usu�rio
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    // Verificar e imprimir o maior n�mero
    if (num1 > num2) {
        cout << "O maior n�mero �: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "O maior n�mero �: " << num2 << endl;
    } else {
        cout << "Os n�meros s�o iguais." << endl;
    }

    return 0;
}
