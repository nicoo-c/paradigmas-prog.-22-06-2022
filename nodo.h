#include "geoloc.h"
#define C_OMISION "1"

class nodo{

	geoloc g;
	string caudal;

	public:

  nodo(geoloc g1 = geoloc(1, 1, "1"), string c = C_OMISION){

    g = g1;
    caudal = c;

  }

  geoloc obtGeo(){

    return g;

  }

  string obtC(){

    return caudal;

  }

  void defGeo(geoloc g1){

    g = g1;

  }

  void defC(string c){

    caudal = c;

  }

};
