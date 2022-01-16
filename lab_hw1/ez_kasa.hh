// EZ-kasa - simple kasa-sistem

#include <string>

class Kasa {
public:
    Kasa();
    Kasa(std::string mjesto, int userID = 0, std::string user, int totRac = 0, double profit = 0.0);
    Kasa(const Kasa &kasa); // copy

    //metode:
    void totalProfit();
    void totalRacun();
    void switchUser();
    void delUser();

    // getteri:
    std::string getMjesto();
    int getUserID();
    std::string getUser();
    int getUkuRac();
    double getProfit();

    // setteri:
    void setMjesto(std::string mjesto);
    void setUserID(int userID);
    void setUser(std::string user);
    void setUkuRac(int ukuRac);
    void setProfit(double profit);

private:
    std::string mjesto; // kao neka poslovnica (ime)
    int userID; // id trenutnog usera
    std::string user; // korisnicko ime usera
    int ukuRac; // ukupno izdanih racuna (all time)
    double profit; // ukupan profit
};
