#include <string>

struct Film {
    std::string naziv;
    int godina;
    std::string trajanje;
};

void pokaziFilm(struct Film film);
