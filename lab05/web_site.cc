#include <iostream>
#include "web_site.hh"

WebStranica::WebStranica(std::string url, int port, bool connection) : url(url), port(port), connection(connection) {
}

void WebStranica::pokaziData() {
    if (connection) { // ako je veza sigurna...
        std::cout << url << " (" << port << ") - SIGURNO" << std::endl;
    } else { // ako nije...
        std::cout << url << " (" << port << ") - NIJE SIGURNO" << std::endl;
    }
}
