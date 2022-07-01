#include "geoloc.h"
#define C_OMISION 1

class nodo{

	geoloc g;
  double caudal;

	public:

  nodo(geoloc g1 = geoloc(1, 1, "1"), double c = C_OMISION){

    g = g1;
    caudal = c;

  }

  geoloc obtGeo(){

    return g;

  }

  double obtC(){

    return caudal;

  }

  void defGeo(geoloc g1){

    g = g1;

  }

  void defC(double c){

    caudal = c;

  }

};
