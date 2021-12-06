#include <iostream>
#include <iomanip> // samo za decimalnu preciznost

int main() {
    int a = 0; // prvi broj
    int b = 0; // drugi broj
    int c = 0; // zbroj a + b
    double d = 0; // kvocijent (double za dec tocku)

    std::cout << "Unesi prvi broj: ";
    std::cin >> a;
    std::cout << "Unesi drugi broj: ";
    std::cin >> b;

    c = a + b;
    d = double(a) / double(b); // trazi decimalnu vrijednost, zato double

    std::cout << "Zbroj " << a << " i " << b << " iznosi: " << c << std::endl;
    std::cout << "Kvocijent iznosi: " << std::fixed << std::setprecision(2) << d << std::endl;

    return 0;
}
