//==============================
//    INCLUDES
//==============================

#include "Environnement.h"
#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//==============================
//    CONSTRUCTORS
//==============================

/**
 * Default Constructor
 */
Environnement::Environnement(){
	H = 5; 
	L = 5; 
	grille  = new Case* [H];
	for(int i=0; i<H;i++){
		grille[i] = new Case[L];
	}
}

void Environnement::showpop(){
	for (int i = 0; i<H; i++){
		for (int j=0; j<L; j++){
			cout<< grille[i][j].pop << " ";
		}
		cout<<endl;
	}
}

void Environnement::showressources(){
	for (int i = 0; i<H; i++){
		for (int j=0; j<L; j++){
			cout<< grille[i][j].ressources << " ";
		}
		cout<<endl;
	}
}

