#include <iostream>

void funkcija(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                std::cout << j + 1;
            } else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int num = 0;

    std::cout << "Unesi broj: ";
    std::cin >> num;

    if (num < 0 || num > 10) {
        return 0;
    } else {
        funkcija(num);
    }

    return 0;
}
