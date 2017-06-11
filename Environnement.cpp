//==============================
//    INCLUDES
//==============================

#include "Environnement.h"
#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <time.h>

#include <gsl/gsl_errno.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_odeiv2.h>

using namespace std;

//==============================
//    CONSTRUCTORS
//==============================

/**
 * Default Constructor
 */
Environnement::Environnement(int H_, int L_){
	H = H_; 
	L = L_; 
	grille  = new Case* [H];
	for(int i=0; i<H;i++){
		grille[i] = new Case[L];
	}
}

Environnement::Environnement(){
	H = 6; 
	L = 6; 
	grille  = new Case* [H];
	for(int i=0; i<H;i++){
		grille[i] = new Case[L];
	}
	grille[0][0].pop = 245;
	grille[0][1].pop = 4455;
	grille[0][2].pop = 785;
	grille[1][0].pop = 2775;
	grille[1][1].pop = 298;
	grille[1][2].pop = 2675;
	grille[2][3].pop = 245;
	grille[2][1].pop = 269;
	grille[3][0].pop = 875;
}



void Environnement::showpop(){
	for (int i = 0; i<H; i++){
		for (int j = 0; j<L; j++){
			cout<< grille[i][j].pop << " ";
		}
		cout<<endl;
	}
}

void Environnement::showressources(){
	for (int i = 0; i<H; i++){
		for (int j = 0; j<L; j++){
			cout<< grille[i][j].ressources << " ";
		}
		cout<<endl;
	}
}

void Environnement::allmutations(){
	for (int i = 0; i<H; i++){
		for (int j = 0; j<L; j++){
			grille[i][j].mutations();
		}
	}  
}

float Environnement::laplacien(int i, int j){
	int dx=1;
	int dy=1;
    float dxx = (grille[i+1][j].pop-2*grille[i][j].pop+grille[i-1][j].pop)/pow(dx,2);//Discrétisation à l'ordre 1 parceque starfoullah ca suffit
    float dyy = (grille[i][j+1].pop-2*grille[i][j].pop+grille[i][j-1].pop)/pow(dy,2);
    return dxx + dyy;
}


