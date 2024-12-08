//
// Created by mael on 07/12/24.
//

#ifndef EVT1JDUR_H
#define EVT1JDUR_H
#include "evenement.h"

using namespace TIME;
class Evt1jDur : public Evt1j {
    private:
        Duree duree;
        Horaire horaire;
    public:

     Evt1jDur(const Date& d, const std::string& s,const Horaire& hor, const Duree& dur) : Evt1j(d,s) ,duree(dur), horaire(hor) {
         std::cout << "Construction de la classe Ev1JDur"<<std::endl;
     }
     const Duree& getDuree() const { return duree; }
     const Horaire& getHoraire() const { return horaire; }
    void afficher(std::ostream& f= std::cout) const {
         Evt1j::afficher(f);
         f<<"Horaire= "<<horaire<<" Duree="<< duree<< std::endl;
     }
    ~Evt1jDur()  {
         std::cout << "Destruction de la classe Evt1jDur"<<std::endl;
     }
    Evt* clone() const {
         return new Evt1jDur(*this);
     }
};



#endif //EVT1JDUR_H
