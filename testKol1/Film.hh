#include "Osoba.hh"

class Film {
public:
    Film(std::string naziv, Osoba producent); // constructor 1
    Film(std::string naziv, Osoba producent, Osoba *recenzent); // constructor 2

    // copy constr:
    Film(const Film &film);

    // operator =:
    Film& operator=(const Film &film);

    void info();

    // GETteri i SETteri:
    std::string getNaziv();
    Osoba getProducent();
    Osoba* getRecenzent();
    double* getOcjena();

    void setNaziv(std::string naziv);
    void setProducent(Osoba producent);
    void setRecenzent(Osoba *recenzent);
    void setOcjena(double* ocjena);

private:
    std::string naziv;
    Osoba producent;
    Osoba *recenzent;
    double *ocjena;
};
