#include <string>

class WebStranica {
public:
    WebStranica(std::string url, int port = 443, bool connection = true);
    void pokaziData();

private:
    std::string url;
    int port;
    bool connection; // sigurno/nesigurno
};
