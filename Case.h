#ifndef CASE_H
#define CASE_H 


//==============================
//    INCLUDES
//==============================

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cmath>

using std::vector;

/**
 * @class Case
 * @brief Creates a Case
 */

class Case
{

public:
//==============================
//    CONSTRUCTORS
//==============================
Case();
Case(float pop_, float ressources_);
//==============================
//    DESTRUCTOR
//==============================
~Case();

//==============================
//    ATTRIBUTES
//==============================

vector <float> RVB; //R: lexique, V: prononciation, B: syntaxe
float ressources;
float d; //coefficient de diffusion
float pop; //population
//int x;
//int y; //coordonnées
float mortalite;
float natalite;
const float SEUIL = 50;
const float SIGMUTLEX = 0.01; //ecart type de mutation du lexique
const float SIGMUTPRON = 0.01;//ecart type de mutation de la prononciation
const float SIGMUTSYNT = 0.01;//ecart type de mutation de la syntaxe

//==============================
//    FUNCTIONS
//==============================
void mutations();
float randN(float sig, float mu);
float distancelangue(Case b);
};

#endif // CASE_H
