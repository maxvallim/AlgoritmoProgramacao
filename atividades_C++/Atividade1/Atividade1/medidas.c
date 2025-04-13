#include <iostream>

int main() {
    int num;
    std::cout << "Digite um número para ver a tabuada: ";
    std::cin >> nu m;

    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }

    return 0;
}
