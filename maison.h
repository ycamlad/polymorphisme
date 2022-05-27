//
// Created by dalmacychristopher on 27/02/2021.
//

#ifndef POLYMORPHISME_MAISON_H
#define POLYMORPHISME_MAISON_H
namespace std
#include <iostream>
class Maison {
protected:
    int prix;
public:
     Maison(int le_prix);
    virtual ~Maison();
    virtual::std::string afficherMaison() = 0;
};



#endif //POLYMORPHISME_MAISON_H
