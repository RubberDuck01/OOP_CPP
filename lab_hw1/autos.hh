// autos - auto management made easy!

#include <string>

class Auto {
public:
    Auto();
    Auto(std::string auto, int year, double kilometraza);
    Auto(std::string auto, std::string motor, int power = 0, int year = 1900, double kilometraza = 0.0, double vrijednost = 0.0);

    void info(); // pokazuje info o autu
    void prodaj();
    void kupi();
    void chkVrijednost();

    // getteri:
    std::string getAuto();
    std::string getMotor();
    int getPower();
    int getYear();
    double getKM();
    double getVrijednost();

    // setteri:
    void setAuto(std::string auto);
    void setMotor(std::string motor);
    void setPower(int power);
    void setYear(int year);
    void setKM(double kilometraza);
    void setVrijednost(double vrijednost);

private:
    std::string auto; // 'VW Golf MK5'
    std::string motor; // '2.0 SDI'
    int power; // '75' :(
    int year; // '2005'
    double kilometraza; // '204163.7'
    double vrijednost;
};
