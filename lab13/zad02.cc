#include <iostream>
#include <stdexcept>
#include <string>

class Iznimka {
public:
    Iznimka(std::string opis) : opis(opis) {
    }

    std::string getOpis() {
        return opis;
    }

private:
    std::string opis;
};

class badArg : public Iznimka {
public:
    badArg(std::string opis) : Iznimka(opis) {
    }
};

class logicIznimka : public Iznimka {
public:
    logicIznimka(std::string opis) : Iznimka(opis) {
    }
};

// funkcija iz zad01:
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
        pretvori(10, 35470);
    }

    catch (badArg& a) {
        std::cout << a.getOpis() << std::endl;
    }

    catch (logicIznimka& b) {
        std::cout << b.getOpis() << std::endl;
    }

    return 0;
}
