#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int numero1,numero2;
    cout << "Digite o primeiro número:";
    cin >> numero1;
    cout << "Digite o segundo número:";
    cin >> numero2;

    if (numero1 == numero2) {
        cout << "Os números são iguais!" << endl;
    }
    else {
          if (numero1 > numero2) {
            cout << "O número "<<numero1<<" é maior!" << endl;
          }
          else {
            cout << "O número "<<numero2<<" é maior!" << endl;
          }
    }

    return 0;
}
