#include <iostream>

int main() {
    int num = 0;

    std::cout << "Unesi broj: ";
    std::cin >> num;

    if (num < 0 || num > 10) {
        return 0;
    } else {
        for (int i = 0; i <= num; i++) {
            for (int j = 0; j < num; j++) {
                if (i > j) {
                    std::cout << j + 1;
                } else {
                    std::cout << "*";
                }
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
