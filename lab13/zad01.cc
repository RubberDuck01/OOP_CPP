#include <iostream>
#include <stdexcept>

double pretvori(double hrk, double tecaj) {
    if (tecaj < 0) {
        throw std::invalid_argument("E: Tecaj ne moze biti negativan!");
    }

    if (tecaj > 100 || hrk < 0) {
        throw std::logic_error("E: Tecaj prevelik i/ili HRK prenizak!");
    }

    return hrk/tecaj;
}

int main() {
    try {
        pretvori(10, -25);
    }
    catch (std::invalid_argument& a) {
        std::cout << a.what() << std::endl;
    }

    return 0;
}
