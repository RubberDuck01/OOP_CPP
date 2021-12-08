#include <iostream>
#include "web_browser.hh"

WebPreglednik::WebPreglednik() : site("www.itsfoss.com"), addons(0) {
}

WebPreglednik::WebPreglednik(std::string url) : site(url), addons(0) {
}

WebPreglednik::WebPreglednik(WebStranica webStranica) : site(site), addons(0) {
}

void WebPreglednik::installAddon() {
    addons++;
}

void WebPreglednik::showStats() {
    std::cout << "Otvorena stranica: ";
    site.pokaziData();
    std::cout << "Broj instaliranih prosirenja: " << addons << std::endl;
}
