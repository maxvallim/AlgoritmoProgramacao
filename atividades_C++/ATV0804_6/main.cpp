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
        cout << "Digite um número:";
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
    cout << "A soma é: "<<soma<<endl;
    cout << "Quantidade de números digitados: "<<contador<<endl;
    cout << "A média é: "<<media<<endl;

    return 0;
}
