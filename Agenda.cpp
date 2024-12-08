//
// Created by mael on 07/12/24.
//

#include "Agenda.h"
Agenda& Agenda::operator<<(Evt& e) {

    agenda.push_back(e.clone()); // Push the pointer into the vector
    return *this;
}

void Agenda::afficher(std::ostream& f) const {
    for(auto it = agenda.begin(); it != agenda.end(); it++) {
        f << *(*it) << std::endl;
    }
}

