#include "Racun.hh"

class UplatniRacun : public Racun {
public:
    UplatniRacun(double stanje, std::string valuta);
    void uplati(double value); // iznos za uplatu

    virtual void transaction() override;
};
