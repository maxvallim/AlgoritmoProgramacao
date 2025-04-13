#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Define o limite de peso
const float LIMITE_PESO = 50.0; // ajuste conforme necessário

void processarDados(const string& arquivoCSV) {
    ifstream arquivo(arquivoCSV);
    string linha;

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo CSV." << endl;
        return;
    }

    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        float peso;

        ss >> peso;

        if (ss.fail()) {
            cout << "Erro ao ler o peso da linha: " << linha << endl;
            continue;
        }

        if (peso > LIMITE_PESO) {
            cout << "ALERTA! Peso acima do limite: " << peso << " kg." << endl;
        } else {
            cout << "Registro normal. Peso: " << peso << " kg." << endl;
        }
    }

    arquivo.close();
}

int main() {
    string nomeArquivo = "c:/temp/dados.csv"; // Substitua pelo nome do seu arquivo .csv

    cout << "Processando dados do arquivo: " << nomeArquivo << endl;

    processarDados(nomeArquivo);

    return 0;
}
