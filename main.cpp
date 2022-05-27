#include <iostream>


#include "maison.h"
#include "bungalow.h"
int main() {
    Maison* ptr_maison = new Bungalow(450000, 25, 90);
    ptr_maison->afficherMaison();
    delete ptr_maison;
}
