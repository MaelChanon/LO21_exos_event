//
// Created by mael on 07/12/24.
//
#ifndef _EVENEMENT_H
#define _EVENEMENT_H
#include <iostream>
#include <string>

#include "Evt.h"
#include "timing.h"
namespace TIME{
    class Evt1j : public Evt {
    private:
        Date date;
    public:
        Evt1j(const Date& d, const std::string& s):Evt(s), date(d) {
            std::cout << "Construction de la classe Evt1J"<<std::endl;
        }
        const Date& getDate() const { return date; }
        void afficher(std::ostream& f= std::cout) const {
            f<<"***** Evt ********"<<"\n"<<"Date="<<date<<"\n";
        }
        virtual ~Evt1j() {
            std::cout << "Destruction de la classe Evt1J"<<std::endl;
        }
        TIME::Evt* clone() const override {
            return new Evt1j(*this);
        }
    };
}


#endif