// header
class KompleksniBroj {
public:
    // 3) metoda izracuna apsolutne vrijednosti (cmath):
    double izracunajApsolutnuVrijednost();

    // metoda za prikaz komplex broja:
    void prikazi();

    // metoda za zbrajanje komplex brojeva:
    void zbrojiKompleksniBroj(const KompleksniBroj &broj);

    // geteri i seteri:
    double getReal();

    double getImag();

    void setReal(double noviReal);

    void setImag(double noviImag);

private:
    double realni;
    double imaginarni;
};
