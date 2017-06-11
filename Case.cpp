//==============================
//    INCLUDES
//==============================

#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <time.h>
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

Case::Case(float pop_, float ressources_){
	RVB = {125,125,125};
	ressources = ressources_;
	d=1;
	pop=pop_;
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

float Case::distancelangue(Case b){
	float Ra=RVB[0];
	float Va=RVB[1];
	float Ba=RVB[2];
	float Rb=b.RVB[0];
	float Vb=b.RVB[1];
	float Bb=b.RVB[2];
	return sqrt(pow((Rb-Ra),2) + pow((Vb-Va),2) + pow((Bb-Ba),2));
}


