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

    // ESTRUTURA DE DECIS�O
    if (idade >= 18) {
        cout << "Voc� � maior de idade." << endl;
    }
    else {
        cout << "Voc� � menor de idade." << endl;
    }

    // ESTRUTURA DE REPETI��O
    for (int i = idade; i > 0; i--) {
    cout << i << endl;
    }



    return 0;
}
