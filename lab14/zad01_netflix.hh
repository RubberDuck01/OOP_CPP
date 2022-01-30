#include <iostream>
#include <string>

class Izdanje {
public:
    Izdanje(std::string naziv, int godina);
    virtual void opis() = 0;

protected:
    std::string naziv;
    int godina;
};

class Serija : public Izdanje {
public:
    Serija(std::string, int, int, int);
    virtual void opis() override;

private:
    int sezona;
    int trajanje;
};
