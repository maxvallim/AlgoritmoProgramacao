#include <iostream>
#include <vector>
#include <tuple>
#include <string>
using namespace std;

int main() {
    // Vetor de tuplas para armazenar as caixas (nome, peso)
    vector<tuple<string, float>> caixas = {
        make_tuple("Caixa A", 3.5),  // Estoque baixo
        make_tuple("Caixa B", 20.0), // Estoque normal
        make_tuple("Caixa C", 55.0), // Excesso de estoque
        make_tuple("Caixa D", 4.9),  // Estoque baixo
        make_tuple("Caixa E", 50.0), // Estoque normal
    };

    // Processar cada caixa
    cout << "Status das caixas no armazém:" << endl;
    for (const auto& caixa : caixas) {
        string nome;
        float peso;

        // Desempacotar os dados da tupla
        tie(nome, peso) = caixa;

        // Verificar o status do estoque baseado no peso
        cout << nome << " | Peso: " << peso << " kg -> ";
        if (peso < 5.0) {
            cout << "Estoque baixo" << endl;
        } else if (peso > 50.0) {
            cout << "Excesso de estoque" << endl;
        } else {
            cout << "Estoque normal" << endl;
        }
    }

    return 0;
}
