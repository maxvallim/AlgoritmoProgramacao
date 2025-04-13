#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, ""); // Configura o uso de caracteres locais
    // ENTRADA E SAIDA DE DADOS
    cout << "Digite sua idade:";
    int idade;
    cin >> idade;

    // ESTRUTURA DE DECISÃO
    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    }
    else {
        cout << "Você é menor de idade." << endl;
    }

    // ESTRUTURA DE REPETIÇÃO
    for (int i = idade; i > 0; i--) {
    cout << i << endl;
    }



    return 0;
}
