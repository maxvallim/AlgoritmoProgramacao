#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i = 0;
    int contador = 0;
    float numero = 0;
    float soma = 0;
    while (i == 0) {
        numero = 0;
        cout << "Digite um n�mero:";
        cin >> numero;

        if (numero == 0) {
            i = 1;
        }
        else {
            soma=soma+numero;
            contador=contador+1;
        }
    }
    float media=soma/contador;
    cout << "A soma �: "<<soma<<endl;
    cout << "Quantidade de n�meros digitados: "<<contador<<endl;
    cout << "A m�dia �: "<<media<<endl;

    return 0;
}
