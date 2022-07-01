#include <iostream>
#include "arista-poste.h"

using namespace std;

int main(){

	geoloc g1(2.2, 4.7, 10.3);
	geoloc g2(4.4, 5.6, 1.5);
  geoloc g3;
  nodo n1(g1);
	nodo n2(g2);
  nodo n3;
  arista a1(n1, n2, 3);
  arista a2;
  poste p1(g1, 3);
  poste p2;

	cout << "Geolocalizacion 1:\nCoordenada x = " << g1.obtC_X() << endl << "Coordenada y = " << g1.obtC_Y() << endl << "Metros sobre el nivel del mar = " << g1.obtMSNM() << "\n\n";

	cout << "Geolocalizacion 2: \nCoordenada x = " << g2.obtC_X() << endl << "Coordenada y = " << g2.obtC_Y() << endl << "Metros sobre el nivel del mar = " << g2.obtMSNM() << "\n\n";

  cout << "Geolocalizacion 3: \nCoordenada x = " << g3.obtC_X() << endl << "Coordenada y = " << g3.obtC_Y() << endl << "Metros sobre el nivel del mar = " << g3.obtMSNM() << "\n\n";

  cout << "Nodo 1: \nCoordenada x = " << n1.obtGeo().obtC_X() << endl << "Coordenada y = " << n1.obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << n1.obtGeo().obtMSNM() << "\n\n";

  cout << "Nodo 2: \nCoordenada x = " << n2.obtGeo().obtC_X() << endl << "Coordenada y = " << n2.obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << n2.obtGeo().obtMSNM() << "\n\n";

  cout << "Nodo 3: \nCoordenada x = " << n3.obtGeo().obtC_X() << endl << "Coordenada y = " << n3.obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << n3.obtGeo().obtMSNM() << "\n\n";

  cout << "Arista 1: \nNodo inicial: \nCoordenada x = " << a1.obtNI().obtGeo().obtC_X() << endl << "Coordenada y = " << a1.obtNI().obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << a1.obtNI().obtGeo().obtMSNM() << endl << "Nodo final: \nCoordenada x = " << a1.obtNF().obtGeo().obtC_X() << endl << "Coordenada y = " << a1.obtNF().obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << a1.obtNF().obtGeo().obtMSNM() << "\n\n";

  cout << "Arista 2: \nNodo inicial: \nCoordenada x = " << a2.obtNI().obtGeo().obtC_X() << endl << "Coordenada y = " << a2.obtNI().obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << a2.obtNI().obtGeo().obtMSNM() << endl << "Nodo final: \nCoordenada x = " << a2.obtNF().obtGeo().obtC_X() << endl << "Coordenada y = " << a2.obtNF().obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << a2.obtNF().obtGeo().obtMSNM() << "\n\n";


  cout << "Poste 1: \nCoordenada x = " << p1.obtGeo().obtC_X() << endl << "Coordenada y = " << p1.obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << p1.obtGeo().obtMSNM() << endl << "Altura total = " << p1.obtHT() << "\n\n";

  cout << "Poste 2: \nCoordenada x = " << p2.obtGeo().obtC_X() << endl << "Coordenada y = " << p2.obtGeo().obtC_Y() << endl << "Metros sobre el nivel del mar = " << p2.obtGeo().obtMSNM() << endl << "Altura total = " << p2.obtHT() << "\n\n";

  g1.defC_X(44.2);
  g1.defC_Y(123.4);
  g1.defMSNM(15.4);

	/*cout << "2 intento: \n Latitud g1:" << g1.obtC_X() << endl << "Longitud g1:" <<  g1.obtC_Y() << endl << "Altura g1:" << g1.obtMSNM() << endl;*/

	return 0;
}
