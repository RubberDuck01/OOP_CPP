#include <iostream>
#include "motor.hh"

int main() {
    Motocikl moto1;
    Motocikl moto2("Kawasaki", "Z300", 300);
    Motocikl moto3("Husqvarna", "Nuda 900R");

    moto1.info();
    moto2.info();
    moto3.info();

    return 0;
}
