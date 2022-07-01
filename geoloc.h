using namespace std;

#define COOR_X_OMISION 1
#define COOR_Y_OMISION 1
#define MSNM_OMISION "1"

class geoloc{

	double coor_x;
	double coor_y;
	string msnm; // Altura sobre el nivel del mar

	public:

  geoloc(double c1 = COOR_X_OMISION, double c2 = COOR_Y_OMISION, string msnm1 = MSNM_OMISION){

    coor_x = c1;
    coor_y = c2;
    msnm = msnm1;

  }

  double obtC_X(){

    return coor_x;

  }

  double obtC_Y(){

    return coor_y;

  }

  string obtMSNM(){

    return msnm;

  }

  void defC_X(double c1){

    coor_x = c1;

  }

  void defC_Y(double c2){

    coor_y = c2;

  }

  void defMSNM(string msnm1){

    msnm = msnm1;

  }

};
