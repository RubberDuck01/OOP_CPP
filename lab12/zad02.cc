#include <iostream>

template <class T>
class Vektor {
public:
    Vektor() {
        n = 0;
    }
    T& start() { // po uzoru na front
        return v[0];
    }
    T& end() { // po uzoru na back
        return v[n - 1];
    }
    void ubaciNaKraj(T ubaci) { // po uzoru na push_back
        v[n] = ubaci;
        n++;
    }

    T v[100];
    int n;
};

int main() {
    Vektor<int> v1;

    v1.ubaciNaKraj(1);
    v1.ubaciNaKraj(2);
    v1.ubaciNaKraj(3);
    std::cout << "Zadnji (nakon 3 ubaci): " << v1.end() << std::endl;

    v1.ubaciNaKraj(4);
    v1.ubaciNaKraj(5);
    v1.ubaciNaKraj(6);
    v1.ubaciNaKraj(7);
    std::cout << "Zadnji (nakon jos 4): " << v1.end() << std::endl;

    std::cout << "Prvi i zadnji: " << v1.start() << " & " << v1.end() << std::endl;

    return 0;
}
