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

Environnement(int H_, int L_);
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
void allmutations();
float laplacien(int i, int j);
};




#endif // ENVIRONNEMENT_H
