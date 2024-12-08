//
// Created by mael on 07/12/24.
//

#ifndef RDV_H
#define RDV_H
#include "Evt1jDur.h"


class Rdv : public Evt1jDur {
private:
    std::string lieu;
    std::string personnes;
public:
    Rdv(const Date& d, const std::string& s,const Horaire& hor, const Duree& dur,const std::string l, const std::string p) : Evt1jDur(d,s,hor,dur),personnes(p), lieu(l) {
        std::cout << "Construction de la classe Rdv"<<std::endl;
    };
    const std::string& getLieu() {return lieu;};
    const std::string& getPersonnes() {return personnes;};
    void afficher(std::ostream& f= std::cout) const {
        Evt1jDur::afficher(f);
        f<<"Lieu="<<lieu<<" Personnes="<<personnes<<std::endl;
    }
    ~Rdv() {
        std::cout << "Destruction de la classe Rdv"<<std::endl;
    }
    Evt* clone() const {
        return new Rdv(*this);
    }
};



#endif //RDV_H
