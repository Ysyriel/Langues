//==============================
//    INCLUDES
//==============================

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

#include "Case.h"
#include "Environnement.h"

int main(int argc, char const *argv[])
{
	Environnement env = Environnement();
	cout<<env.grille[0][0].RVB[0]<<endl;
	env.grille[0][0].mutations();
	cout<<env.grille[0][0].RVB[0]<<endl;
	//env.grille[0][0].mutations();
	//cout<<env.grille[0][0].RVB<<endl;
	//env.grille[0][0].mutations();
	//cout<<env.grille[0][0].RVB<<endl;
	env.showpop();
	return EXIT_SUCCESS;
}


