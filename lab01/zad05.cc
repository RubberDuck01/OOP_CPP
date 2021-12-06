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

int main() {
    int n;

    std::cout << "Koliko elemenata? ";
    std::cin >> n;

    int polje[n]; // mora bit tu!!!!!!!
    std::cout << "Unesi " << n << " elemenata: ";
    for (int i = 0; i < n; i++) {
        std::cin >> polje[i];
    }

    function(polje, n);

    return 0;
}
