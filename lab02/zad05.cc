#include <iostream>
#include "zad05film.hh"

int main() {
    Film film1;
    film1.naziv = "Jobs";
    film1.godina = 2013;
    film1.trajanje = "2h10m";

    pokaziFilm(film1);

    return 0;
}
