#include "nodo.h"
#define H_OMISION "1"

class arista{

  nodo i; //Inicio
  nodo f; //Final

 public:

  arista(nodo i1 = geoloc(1, 1, 1), nodo f1 = geoloc(1, 1, 1)){

    i = i1;
    f = f1;

  }

  nodo obtNI(){

    return i;

  }

  nodo obtNF(){

    return f;

  }

  void defNI(nodo i1){

    i = i1;

  }

  void defNF(nodo f1){

    f = f1;

  }

};

class poste{

  geoloc g;
  string hTotal;

 public:

  poste(geoloc g1 = geoloc(1, 1, 1), string hT = H_OMISION){

    g = g1;
    hTotal = hT;

  }

  geoloc obtGeo(){

    return g;

  }

  string obtHT(){

    return hTotal;

  }

  void defGeo(geoloc g1){

    g = g1;

  }

  void defHT(double hT){

    hTotal = hT;

  }

};
