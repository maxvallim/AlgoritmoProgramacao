#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int numero1,numero2;
    cout << "Digite o primeiro n�mero:";
    cin >> numero1;
    cout << "Digite o segundo n�mero:";
    cin >> numero2;

    if (numero1 == numero2) {
        cout << "Os n�meros s�o iguais!" << endl;
    }
    else {
          if (numero1 > numero2) {
            cout << "O n�mero "<<numero1<<" � maior!" << endl;
          }
          else {
            cout << "O n�mero "<<numero2<<" � maior!" << endl;
          }
    }

    return 0;
}
