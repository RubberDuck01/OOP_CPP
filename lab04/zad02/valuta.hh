#include <string>

class Valuta {
public:
    Valuta(std::string naziv);
    Valuta(std::string naziv, double tecaj);

    void setTecaj(double tecaj);
    double kupi(double hrk);

private:
    std::string naziv;
    double tecaj;
};
