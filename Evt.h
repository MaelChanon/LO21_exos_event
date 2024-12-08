//
// Created by mael on 07/12/24.
//

#ifndef EVET_H
#define EVET_H
#include <iostream>


namespace TIME {
    class Evt {
    private:
        std::string sujet;
    public:
        Evt(const std::string& s) : sujet(s) {}
        virtual void afficher(std::ostream& f= std::cout) const = 0;
        virtual Evt* clone() const = 0;
        const std::string& getDescription() const { return sujet; }
    };
}

std::ostream& operator<<(std::ostream& f, const TIME::Evt & e);


#endif //EVET_H
