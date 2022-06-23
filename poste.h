#include "nodo.h"

class poste{

  geoloc g;
  double hTotal;

 public:

  poste(geoloc g1, double hT){

    g = g1;
    hTotal = hT;

  }

  geoloc ObtGeo(){

    return g;

  }

  double obtHT(){

    return hTotal;

  }

  void defGeo(geoloc g1){

    g = g1;

  }

  void defHT(double hT){

    hTotal = hT;

  }

};
