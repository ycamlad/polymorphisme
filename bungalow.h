//
// Created by dalmacychristopher on 27/02/2021.
//

#ifndef POLYMORPHISME_BUNGALOW_H
#define POLYMORPHISME_BUNGALOW_H


#include <iostream>
#include "maison.h"
class Bungalow : public Maison {
private:
    int surface_maison;
    int surface_terrain;
public:
    Bungalow(int le_prix, int la_surface_maison, int la_surface_terrain);
    void afficherBungalow();
};
#endif //POLYMORPHISME_BUNGALOW_H
