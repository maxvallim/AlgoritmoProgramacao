#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ""); // Configura o uso de caracteres locais
    cout << "Digite a sua idade:";
    int idade;
    cin >> idade;

    if (idade >= 18) {
        cout << "Voc� � maior de idade." << endl;
    } else {
        cout << "Voc� � menor de idade." << endl;
    }



    cout << "" << endl;
    for (int i = idade; i > 0; i--) {
    cout << i << endl;
    }


    return 0;
}
