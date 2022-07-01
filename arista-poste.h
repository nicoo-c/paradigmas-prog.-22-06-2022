#include "nodo.h"
#define C_OMISION 1
#define H_OMISION 1

class arista{

  nodo i; //Inicio
  nodo f; //Final
  double caudal;

 public:

  arista(nodo i1 = geoloc(1,1,1), nodo f1 = geoloc(1,1,1), double c = C_OMISION){

    i = i1;
    f = f1;
    caudal = c;

  }

  nodo obtNI(){

    return i;

  }

  nodo obtNF(){

    return f;

  }

  double obtC(){

    return caudal;

  }

  void defNI(nodo i1){

    i = i1;

  }

  void defNF(nodo f1){

    f = f1;

  }

  void defC(double c){

    caudal = c;

  }

};

class poste{

  geoloc g;
  double hTotal;

 public:

  poste(geoloc g1 = geoloc(1,1,1), double hT = H_OMISION){

    g = g1;
    hTotal = hT;

  }

  geoloc obtGeo(){

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
