#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float numero1,numero2,numero3;
    cout << "Digite o primeiro n�mero:";
    cin >> numero1;
    cout << "Digite o segundo n�mero:";
    cin >> numero2;
    cout << "Digite o terceiro n�mero:";
    cin >> numero3;

    float media = (numero1+numero2+numero3)/3;
    cout<<fixed<<setprecision(2);
    cout << "A m�dia �:"<<media <<endl;

    return 0;
}
