#include <iostream>
#include <locale.h>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i=0;
    int numero=0;
    int maior=0;
    int menor=99999;
    while (i==0) {
        cout << "Digite um n�mero (0-sair):";
        cin >> numero;
        if (numero == 0) {
            i=1;
        }
        else {
           if (numero<menor) {
            menor=numero;
           }
           if (numero>maior){
            maior=numero;
           }
        }
    }
    cout << "O maior n�mero �: "<<maior<<endl;
    cout << "O menor n�mero �: "<<menor<<endl;
}
