#include <iostream>
#include "Film.hh"

int main() {
    // osoba:
    Osoba os1("Linus", "Torvalds");
    Osoba os2("Bill", "Gates");

    os1.info();
    os2.info();

    // film:
    Film mov1("Need For Speed", os1);
    mov1.info();

    Film mov2(mov1); // copy
    mov2.info();

    Film mov3("Sniper: Legacy", os1, &os2);
    mov3.setOcjena(new double(6.97));
    mov3.info();

    mov2 = mov3; // operator =
    mov2.info();

    Film mov4("GNU/Linux vs Windows", Osoba("Firstname", "Lastname"), new Osoba("Ime", "Prezime"));
    mov4.setOcjena(new double(9.85));
    mov4.info();

    return 0;
}
