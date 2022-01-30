#include <iostream>

template <typename T>
class Pravokutnik {
public:
    Pravokutnik(T a, T b) : a(a), b(b) {
    }

    T opseg() {
        return 2 * a + 2 * b;
    }

private:
    T a;
    T b;
};

int main() {
    Pravokutnik<int> p1(3, 6);
    std::cout << "Opseg: " << p1.opseg() << std::endl;

    return 0;
}
