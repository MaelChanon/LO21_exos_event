#include <iostream>

#include "Agenda.h"
#include "evenement.h"
#include "Evt1jDur.h"
#include "Rdv.h"
#include "timing.h"

using namespace std;
using namespace TIME;
int main() {

    Rdv* pt5= new Rdv(Date(12,11,2013),"reunion UV",Horaire(17,30),Duree(60)," Intervenants UV","bureau");
    Evt1j* pt6= new Rdv(Date(12,11,2013),"reunion UV",Horaire(17,30),Duree(60)," Intervenants UV","bureau");
    Agenda a;

    a << *pt5 << *pt6;
    // std::cout << *pt5;
    // a.afficher();
    for(auto it = a.begin(); it != a.end(); ++it) {
        std::cout << *(*it) << std::endl;
    }
    return 0;
}
