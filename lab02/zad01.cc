#include <iostream>

// zamijeni preko pokazivaca:
void zamijeniP (int *change) {
    *change = 76;
}

// zamijeni preko referenci:
void zamijeniR (int &variable) {
    variable = 17;
}

int main() {
    int var = 3;
    std::cout << "Default: " << var << std::endl;

    zamijeniP(&var); // saljem referencu!
    std::cout << "Pokazivac: " << var << "\n";

    zamijeniR(var); // ref
    std::cout << "Referenca: " << var << std::endl;

    return 0;
}
