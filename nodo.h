#include "geoloc.h"

class nodo{

	geoloc g;

	public:

  nodo(geoloc g1 = geoloc(1,1,1)){

    g = g1;

  }

  geoloc obtGeo(){

    return g;

  }

  void defGeo(geoloc g1){

    g = g1;

  }

};
