// GNU/Linux distributions

#include <string>

class Distro {
public:
    Distro();
    Distro(std::string name);
    Distro(std::string name, std::string ver, double rating);

    // copy:
    Distro(const Distro &distro);

    // operator:
    Distro& operator=(const Distro &distro);
    bool operator==(const Distro &distro);

    void info();
    void support(std::string name); // supporta (prati) odabrani distro
    void rateIt(double rating); // user rejta odabrani distro

    // get:
    std::string getName();
    std::string getVer();
    double getRating();
    int getUsers();
    bool getActive();

    // set:
    void setName();
    void setVer();
    void setRating();
    void setUsers();
    void setActive();

private:
    std::string name;
    std::string ver;
    double rating;
    int users;
    bool active;
};
