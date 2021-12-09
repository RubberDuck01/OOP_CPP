#include <string>

class Osoba {
public:
    Osoba(std::string ime, std::string prezime);

    // getteri:
    std::string getIme();
    std::string getPrezime;

    // setteri:
    void setIme(std::string ime);
    void setPrezime(std::string prezime);

    bool operator==(const Osoba &osoba);
    void info();

private:
    std::string ime;
    std::string prezime;
};
