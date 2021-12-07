#include <string>

class Motocikl {
public:
    Motocikl(); // defaultni konstruktor
    Motocikl(std::string manufacturer, std::string model); // dodatni
    Motocikl(std::string manufacturer, std::string model, int kubikaza); // dodatni2

    void info(); // pokazuje info o motoru

private:
    std::string manufacturer;
    std::string model;
    int kubikaza;
};
