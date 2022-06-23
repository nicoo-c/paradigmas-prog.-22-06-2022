#include "nodo.h"

class arista{

  nodo i; //Inicio
  nodo f; //Final
  double caudal;

 public:

  arista(nodo i1, nodo f1, double c){

    i = i1;
    f = f1;
    caudal = c;

  }

  nodo obtNI(){

    return i;

  }

  nodo obtNF(){

    return F

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
