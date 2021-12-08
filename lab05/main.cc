#include <iostream>
#include "web_browser.hh"

int main() {
    std::cout << "======= Web Stranica =======\n";

    // stvori i pokazi neki web site:
    WebStranica site1("www.wikipedia.org");
    WebStranica site2("www.facebook.com", 000, 0); // port 000, nesigurno (0)
    site1.pokaziData();
    site2.pokaziData();

    std::cout << "======= Web Browser =======\n";
    // napravi browser, def constructor:
    WebPreglednik Brave;
    Brave.showStats();

    // custom browser + addons:
    WebPreglednik Firefox("www.kde.org");
    Firefox.installAddon();
    Firefox.installAddon();

    Firefox.showStats();

    return 0;
}
