#include <iostream>
#include "zad05film.hh"

void pokaziFilm(Film film) {
    std::cout << film.naziv << " (" << film.godina << "), " << film.trajanje << std::endl;
}
