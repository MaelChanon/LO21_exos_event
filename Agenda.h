//
// Created by mael on 07/12/24.
//

#ifndef AGENDA_H
#define AGENDA_H
#include <vector>

#include "evenement.h"

using namespace std;
using namespace TIME;
class Agenda {
 private:
   vector<Evt*> agenda;
    class Iterator {
        private:
        std::vector<Evt*>::iterator iter;

        public:
        // Constructeur de l'itérateur
        explicit Iterator(std::vector<Evt*>::iterator it) : iter(it) {}

        Iterator& operator++() {
            ++iter;
            return *this;
        }
        Iterator& operator++(int) {
            ++iter;
            return *this;
        }
        Iterator& operator--() {
            --iter;
            return *this;
        }
        Iterator& operator--(int) {
            --iter;
            return *this;
        }
        // Opérateur de comparaison
        bool operator!=(const Iterator& other) const {
            return iter != other.iter;
        }

        // Déférer l'élément
        Evt* operator*() {
            return *iter;
        }
    };
 public:
    Agenda() = default;
    Agenda(vector<Evt> agenda) = delete;
    Agenda& operator=(const Agenda& agenda) = delete;
    Agenda& operator<<(Evt& e);
    void afficher(std::ostream& f=std ::cout)const;
    Iterator begin() {
        return Iterator(agenda.begin());
    }

    Iterator end() {
        return Iterator(agenda.end());
    }
    ~Agenda() {
        for (auto it = agenda.begin(); it != agenda.end(); it++) {
            delete (*it);
        }
    };
};




#endif //AGENDA_H
