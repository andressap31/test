#include <iostream>

bool fibonacci(int n, int a = 0, int b = 1) {
    if (a == n) {
        return true;
    }
    if (a > n) {
        return false;
    }
    return fibonacci(n, b, a + b);
}

int main() {
    int numero;
    std::cout << "Informe um numero: ";
    std::cin >> numero;
    
    if (fibonacci(numero)) {
        std::cout << numero << " pertence a sequencia." << std::endl;
    } else {
        std::cout << numero << " nao pertence a sequencia." << std::endl;
    }

    return 0;
}
