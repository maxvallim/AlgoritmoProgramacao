#include <iostream>

using namespace std;

struct Nodo {
    int valor;
    Nodo* proximo;
};

void imprimirListaCircular(Nodo* cabeca) {
    Nodo* atual = cabeca;
    do {
        cout << atual->valor << " ";
        atual = atual->proximo;
    } while (atual != cabeca);
    cout << endl;
}

int main() {
    Nodo* primeiro = new Nodo{10, nullptr};
    Nodo* segundo = new Nodo{20, nullptr};
    Nodo* terceiro = new Nodo{30, nullptr};

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = primeiro;

    imprimirListaCircular(primeiro);

    return 0;
}
