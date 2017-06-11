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

#include "engine.h"

using namespace std;

#include "Case.h"
#include "Environnement.h"

int main(int argc, char const *argv[])
{
	Engine *engOpen(const char *startcmd);
	Environnement env = Environnement();
	//A FAIRE : mutation ALEATOIRES
	env.showpop();
	cout<<env.laplacien(4,4)<<endl;
	cout<<env.laplacien(4,2)<<endl;
	cout<<env.laplacien(1,1)<<endl;
	return EXIT_SUCCESS;
}


