#include <iostream>

template <typename T>
T maksimum(T num1, T num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    std::cout << "Max je: " << maksimum(76, 23) << std::endl;

    return 0;
}
