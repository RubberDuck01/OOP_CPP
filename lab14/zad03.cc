#include <iostream>
#include <stdexcept>

// klasa:
class mojaIznimka {
public:
    // konstruktor postavlja int error:
    mojaIznimka(int error) : error(error) {
    }

    // get error:
    int getErr() {
        return error;
    }

private:
    int error;
};

// func:
int sum(int a, int b) {
    if (a < 10 || b < 10) {
        throw std::logic_error("E: Parametar manji od 10!");
    }

    return a + b;
}

// driver:
int main() {
    try { // pokusaj ovo, ocekujem error
        sum(17, 6);
    }

    catch (mojaIznimka& e) {
        std::cout << "E: " << e.getErr() << std::endl;
    }

    return 0;
}
