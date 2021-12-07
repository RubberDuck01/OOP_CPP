#include <string>

class Osoba {
public:
    // konstruktor ime, prezime:
    Osoba(std::string ime, std::string prezime);

    // getteri za ime i prezime:
    std::string getIme();
    std::string getPrezime();
private:
    std::string ime;
    std::string prezime;
};
