#include <iostream>
#include <string>

// napravi strukturu:
struct Film {
    std::string naziv;
    int godina;
    std::string trajanje;
};

// funkcija da pokaze info o filmu:
void pokaziFilm(struct Film film) {
    std::cout << film.naziv << " (" << film.godina << "), " << film.trajanje << std::endl;
}

int main() {
    struct Film mojFilm;
    mojFilm.naziv = "Death Race";
    mojFilm.godina = 2008;
    mojFilm.trajanje = "1h51m"; // idk tocno lol

    pokaziFilm(mojFilm);

    return 0;
}
