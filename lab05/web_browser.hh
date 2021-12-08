#include "web_site.hh"

class WebPreglednik {
public:
    WebPreglednik();
    WebPreglednik(std::string url);
    WebPreglednik(WebStranica webStranica);

    void showStats(); // pokazuje stanje preglednika
    void installAddon(); // omogucuje instalaciju addonova

private:
    WebStranica site;
    int addons;
};
