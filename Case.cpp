//==============================
//    INCLUDES
//==============================

#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <vector>

//==============================
//    CONSTRUCTORS
//==============================

/**
 * default constructor
 */
Case::Case(){
	RVB = {125,125,125};
	ressources = SEUIL;
	d=1;
	pop=10;
	natalite=ressources/100;
	mortalite=SEUIL/100-natalite;
}


//==============================
//    DESTRUCTOR
//==============================

Case::~Case(){
}

//==============================
//    FUNCTIONS
//==============================
void Case::mutations(){
	float mutlex = 0;
	float mutsynt = 0;
	float mutpron = 0;
	float mu=0; //mu = 0 pour les 3 caracteres RVB 
	if (pop!=0){
		for (int i=0; i<pop; i++){
			mutlex += randN(SIGMUTLEX, mu);			
			mutsynt += randN(SIGMUTSYNT, mu);
			mutpron += randN(SIGMUTPRON, mu);
		}
	}
	RVB[0] += mutlex/pop;
	RVB[1] += mutsynt/pop;
	RVB[2] += mutpron/pop;
}

float Case::randN(float sig, float mu){
	float a = ((double) rand())/((double) RAND_MAX);
	float randn = sqrt(-2.0*log(a))*cos(2.0*M_PI*a);
	return randn*sig+mu;
}
	
