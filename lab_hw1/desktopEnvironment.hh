// UNIX (& UNIX-like) Desktop Environments

#include <string>

class DE {
public:
    DesktopEnvironment();
    DesktopEnvironment(std::string name);
    DesktopEnvironment(std::string name, std::string ver);
    DesktopEnvironment(double rating);

    void about(); // pokaze podatke o zeljenom DE
    void support(std::string name); // supporta (prati) odabrani DE
    void rateIt(double rating); // user rejta odabrani DE

    // getteri:
    std::string getName();
    std::string getVer();
    double getRate();
    int getUsers();
    bool getActive();

    // setteri:
    void setName(std::string name);
    void setVer(std::string ver);
    void setRate(double rating);
    void setUsers(int users);
    void setActive(bool active);

private:
    std::string name;
    std::string ver; // string jer moze biti npr '5.16.0-arch1-1'
    double rating;
    int users; // aktivnih korisnika (random data za ovaj zad)
    bool active; // true = aktivan, jos se razvija; false = obsolete
};
