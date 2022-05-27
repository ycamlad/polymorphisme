//
// Created by dalmacychristopher on 27/02/2021.
//

#include "bungalow.h"
Bungalow::Bungalow(int le_prix, int la_surface_maison, int la_surface_terrain)
        : Maison(le_prix) {
    this->surface_maison = la_surface_maison;
    this->surface_terrain = la_surface_terrain;
}
void Bungalow::afficherBungalow() {
    std::cout << "Prix du bungalow : " << this->prix << std::endl;
    std::cout << "Surface de la maison : " << this->surface_maison << " m2" <<
              std::endl;
    std::cout << "Surface du terrain : " << this->surface_terrain << " m2" <<
              std::endl;
}