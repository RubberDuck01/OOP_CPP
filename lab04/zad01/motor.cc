#include <iostream>
#include "motor.hh"

// default, sve prazno:
Motocikl::Motocikl() : Motocikl("", "", 0) {
}

// dodatni - manufacturer i model, kubikaza na 0:
Motocikl::Motocikl(std::string manufacturer, std::string model) : Motocikl(manufacturer, model, 0) {
}

// dodatni - sve (inicijalizacijska lista):
Motocikl::Motocikl(std::string manufacturer, std::string model, int kubikaza) : manufacturer(manufacturer), model(model), kubikaza(kubikaza) {
    if (kubikaza < 0) {
        kubikaza = 0;
    }
}

void Motocikl::info() {
    std::cout << manufacturer << " " << model << " (" << kubikaza << ")" << std::endl;
}
