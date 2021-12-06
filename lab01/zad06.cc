#include <iostream>

void function(int polje[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == (n - 1)) {
            std::cout << *(polje + i);
        } else {
            std::cout << *(polje + i) << ", ";
        }
    }
    std::cout << std::endl;
}

// function overloading:
void function(double polje[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == (n - 1)) {
            std::cout << *(polje + i);
        } else {
            std::cout << *(polje + i) << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Koliko elemenata? ";
    std::cin >> n;

    int polje[n];
    std::cout << "Unesi " << n << " elemenata: ";
    for (int i = 0; i < n; i++) {
        std::cin >> polje[i];
    }

    // decimalni niz (zad 6):
    double mojNiz[5] = { 1.5, 2.4, 7.6, 8.9, 3.3 };

    function(mojNiz, 5);
    function(polje, n);

    return 0;
}
