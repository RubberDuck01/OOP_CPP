#include <string>
#include <vector>

class Racun {
public:
    Racun(double stanje, std::string valuta);
    double getStanje();
    std::string getStanjeText();
    virtual void transaction();

protected:
    double stanje;
    std::string valuta;
    std::vector<double> transact;
    static int transact_count;
};
