// mod manager - upravlja modovima za neku video igru (inspiracija - MO2)

#include <string>

class Manager {
public:
    Manager();
    Manager(std::string name, int modA = 0, int modT = 0, bool account = false);
    // copy:
    Manager(const Manager &manager);

    void about(); // pokaze info o manageru (programu)
    void stats(); // pokaze info o korisnikovim modovima
    void update(); // provjerava update

    void installMod(); // instalira novi mod
    void removeMod(); // delete mod

    // getteri:
    std::string getIgra();
    int getActive();
    int getTotal();
    double getSize();
    std::string getVer();
    bool getAcc();

    // setteri:
    void setIgra(std::string igra);
    void setActive(int modA);
    void setTotal(int modT);
    void setSize(double size);
    void setVer(std::string ver);
    void setAcc(bool account);

private:
    std::string igra; // koja igra je u pitanju
    int modA; // trenutno aktiviranih modova
    int modT; // ukupno instaliranih modova (aktivirani + neaktiviranih)
    double size; // koliko prostora zauzimaju modovi (sveukupno)
    std::string ver;
    bool account; // povezan s accountom na nekom modding site (npr Nexus)
};
