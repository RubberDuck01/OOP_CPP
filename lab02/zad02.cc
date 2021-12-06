#include <iostream>

int pokaziPolje(int polje[], int n, int *pointer1 = nullptr, int *pointer2 = nullptr) {
    int sum = 0;
    int max;
    for (int i = 0; i < 5; i++) {
        std::cout << polje[i] << " ";
        sum = sum + polje[i];

        if (i == 0) {
            max = polje[i];
        }
        if (max < polje[i]) {
            max = polje[i];
        }
    }
    std::cout << std::endl;
    std::cout << "Average: " << sum / n << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 1;
}

int main() {
    int myPolje[5] = { 1, 2, 3, 4, 5 };
    int *pointer1 = nullptr;
    int *pointer2 = nullptr;

    // pokazivanje:
    pokaziPolje(myPolje, 5);

    return 0;
}
