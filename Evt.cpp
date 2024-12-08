//
// Created by mael on 07/12/24.
//

#include "Evt.h"
std::ostream& operator<<(std::ostream& f, const TIME::Evt & e) {
    e.afficher(f);
    return f;
}