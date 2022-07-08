#include <string>
#include "minmax.h"
#define COOR_X_OMISION 1
#define COOR_Y_OMISION 1
#define MSNM_OMISION 1

using namespace std;

class geoloc{

	double latitud;
	double longitud;
	double msnm; // Altura sobre el nivel del mar

	public:

  geoloc(double c1 = COOR_X_OMISION, double c2 = COOR_Y_OMISION, double msnm1 = MSNM_OMISION){

    latitud = c1;
    longitud = c2;
    msnm = msnm1;

  }

  double obtLat(){

    return latitud;

  }

  double obtLon(){

    return longitud;

  }

  double obtMSNM(){

    return msnm;

  }

  void defLat(double c1){

    latitud = c1;

  }

  void defLon(double c2){

    longitud = c2;

  }

  void defMSNM(double msnm1){

    msnm = msnm1;

  }

};
