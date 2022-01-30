// GNU/Linux distributions

#include <iostream>
#include "distros.hh"

// default - sve prazno:
Distro::Distro() : Distro("", "", 0.0) {
}

// samo ime:
Distro::Distro(std::string name) : Distro(name) {
}

// AiO (ini list):
Distro::Distro(std::string name, std::string ver, double rating) : name(name), ver(ver), rating(rating) {
}

// copy constructor:
Distro::Distro(const Distro &distro) : name(distro.name), ver(distro.ver), rating(distro.rating), users(distro.users), active(distro.active) {
}

// operator:
Distro& Distro::operator=(const Distro &distro) {
    this -> name = distro.name;
    this -> ver = distro.ver;
    this -> rating = distro.rating;
    this -> users = distro.users;
    this -> active = distro.active;

    return *this;
}

bool Distro::operator==(const Distro &distro) {
    if (ver == distro.ver) {
        return true;
    }

    return false;
}

void Distro::info() {
    std::cout << name << " (" << ver << "), Rating: " << rating << std::endl;
}

// support distro - zaprati odredjeni distro kao znak podrske:
void Distro::support() {
    std::cout << "Sada pratite " << name << "team!\n";
}

// rate:
void Distro::rateIt() {
    std::cout << "Koju ocjenu dajete odabranoj distribuciji (" << name << ")? [1 - 5]";
    std::cin >> rating;

    if (rating < 1 && rating > 5) {
        std::cout << "Kriva vrijednost! Raspon ocjena je 1 - 5!\n";
    } else {
        Distro::setRating(rating);
        std::cout << "Ocjena zabiljezena!\n";
    }
}

// getteri:
std::string Distro::getName() {
    return name;
}

std::string Distro::getVer() {
    return ver;
}

double Distro::getRating() {
    return rating;
}

int Distro::getUsers() {
    return users;
}

bool Distro::getActive() {
    return active;
}

// setteri:
void Distro::setName(std::string name) {
    this -> name = name;
}

void Distro::setVer(std::string ver) {
    this -> ver = ver;
}

void Distro::setRating(double rating) {
    if (rating < 1 && rating > 5) {
        std::cout << "E: Ocjena nije u rasponu!\n";
        return;
    } else {
        this -> rating = rating;
    }
}

void Distro::setUsers(int users) {
    this -> users = users;
}

void Distro::setActive(bool active) {
    this -> active = active;
}
