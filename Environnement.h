#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H 

//==============================
//    INCLUDES
//==============================

/**
 * @class Environnement
 * @brief Creates an environnement
 */
#include "Case.h"
class Environnement
{

public:

//==============================
//    CONSTRUCTORS
//==============================

Environnement();

//==============================
//    ATTRIBUTES
//==============================

Case** grille;
int H; //hauteur
int L; //largeur

//==============================
//    FUNCTIONS
//==============================

void showpop();
void showressources();
};




#endif // ENVIRONNEMENT_H
