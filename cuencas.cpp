#include <iostream>
#include <string>
#include <vector>
#include "arista-poste.h"
#include "ini.h"

using namespace std;

void crearMatriz(vector<vector<string>> &matriz);
string convertirFecha(string fecha);
void columnas(vector<vector<string>> matriz); // Solo para ver
void filas(vector<vector<string>> matriz);

int main() {

  vector<vector<string>> matriz{};

  crearMatriz(matriz);

  geoloc glacial1(-33.0553309, -70.0974934, "5.482,2498764");
  geoloc glacial2(-33.0648283, -70.0801479, "4.872,0800966");
  geoloc glacial3(-33.0648283, -70.0801479, "4.872,0800966");
  geoloc glacial4(-33.0648283, -70.0801479, "4.872,0807003");
  geoloc glacial5(-33.1062033, -70.1099957, "4.140,3754039");

  nodo glacial[5];

  glacial[0].defGeo(glacial1);
  glacial[1].defGeo(glacial2);
  glacial[2].defGeo(glacial3);
  glacial[3].defGeo(glacial4);
  glacial[4].defGeo(glacial5);

  geoloc olivares1(-33.1342342, -70.1173206, "3.865,0788179"); // OGJS
  geoloc olivares2(-33.1519159, -70.1156773, "3.624,2458196");
  geoloc olivares3(-33.1691106, -70.1196407, "2.995,8209692");
  geoloc olivares4(-33.1744201, -70.1245323, "2.872,1727692"); // OGSO
  geoloc olivares5(-33.1787219, -70.1246264, "2.820,785347"); // OEPC
  geoloc olivares6(-33.2059301, -70.1079302, "2.646,4256055");
  geoloc olivares7(-33.2125441, -70.1081171, "2.624,9997426"); // OECF
  geoloc olivares8(-33.223682, -70.1115996, "2.531,1668304"); // OETL
  geoloc olivares9(-33.2537932, -70.1237616, "2.439,3954124"); // OELP
  geoloc olivares10(-33.2657705, -70.1340651, "2.419,8888041"); // OQMH
  geoloc olivares11(-33.2681972, -70.1392941, "2.399,9873003");
  geoloc olivares12(-33.3190523, -70.1403288, "2.337,2787479");
  geoloc olivares13(-33.355944, -70.1346517, "2.232,3907302"); // OEPT
  geoloc olivares14(-33.3653737, -70.1319324, "2.217,384257");
  geoloc olivares15(-33.3717985, -70.137324, "2.205,1608841");
  geoloc olivares16(-33.3889931, -70.1294007, "2.135,9048404");
  geoloc olivares17(-33.4952772, -70.1384679, "1.542,7589502"); // ORCR

  nodo olivares[17];

  olivares[0].defGeo(olivares1);
  olivares[1].defGeo(olivares2);
  olivares[2].defGeo(olivares3);
  olivares[3].defGeo(olivares4);
  olivares[4].defGeo(olivares5);
  olivares[5].defGeo(olivares6);
  olivares[6].defGeo(olivares7);
  olivares[7].defGeo(olivares8);
  olivares[8].defGeo(olivares9);
  olivares[9].defGeo(olivares10);
  olivares[10].defGeo(olivares11);
  olivares[11].defGeo(olivares12);
  olivares[12].defGeo(olivares13);
  olivares[13].defGeo(olivares14);
  olivares[14].defGeo(olivares15);
  olivares[15].defGeo(olivares16);
  olivares[16].defGeo(olivares17);

  nodo n1(glacial1, "3");
  nodo n2(glacial2, "5");
  nodo n3;
  arista a1(n1, n2);
  arista a2;
  poste p1(glacial1, 3);
  poste p2;

  cout << "Geolocalizacion 1:\nCoordenada x = " << glacial1.obtC_X() << endl
       << "Coordenada y = " << glacial1.obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << glacial1.obtMSNM() << "\n\n";

  cout << "Geolocalizacion 2: \nCoordenada x = " << glacial2.obtC_X() << endl
       << "Coordenada y = " << glacial2.obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << glacial2.obtMSNM() << "\n\n";

  cout << "Geolocalizacion 3: \nCoordenada x = " << glacial3.obtC_X() << endl
       << "Coordenada y = " << glacial3.obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << glacial3.obtMSNM() << "\n\n";

  cout << "Nodo 1: \nCoordenada x = " << n1.obtGeo().obtC_X() << endl
       << "Coordenada y = " << n1.obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << n1.obtGeo().obtMSNM() << endl
       << "Caudal = " << n1.obtC() << "\n\n";

  cout << "Nodo 2: \nCoordenada x = " << n2.obtGeo().obtC_X() << endl
       << "Coordenada y = " << n2.obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << n2.obtGeo().obtMSNM() << endl
       << "Caudal = " << n2.obtC() << "\n\n";

  cout << "Nodo 3: \nCoordenada x = " << n3.obtGeo().obtC_X() << endl
       << "Coordenada y = " << n3.obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << n3.obtGeo().obtMSNM() << endl
       << "Caudal = " << n3.obtC() << "\n\n";

  cout << "Arista 1: \nNodo inicial: \nCoordenada x = "
       << a1.obtNI().obtGeo().obtC_X() << endl
       << "Coordenada y = " << a1.obtNI().obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << a1.obtNI().obtGeo().obtMSNM()
       << endl
       << "Nodo final: \nCoordenada x = " << a1.obtNF().obtGeo().obtC_X()
       << endl
       << "Coordenada y = " << a1.obtNF().obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << a1.obtNF().obtGeo().obtMSNM()
       << "\n\n";

  cout << "Arista 2: \nNodo inicial: \nCoordenada x = "
       << a2.obtNI().obtGeo().obtC_X() << endl
       << "Coordenada y = " << a2.obtNI().obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << a2.obtNI().obtGeo().obtMSNM()
       << endl
       << "Nodo final: \nCoordenada x = " << a2.obtNF().obtGeo().obtC_X()
       << endl
       << "Coordenada y = " << a2.obtNF().obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << a2.obtNF().obtGeo().obtMSNM()
       << "\n\n";

  cout << "Poste 1: \nCoordenada x = " << p1.obtGeo().obtC_X() << endl
       << "Coordenada y = " << p1.obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << p1.obtGeo().obtMSNM() << endl
       << "Altura total = " << p1.obtHT() << "\n\n";

  cout << "Poste 2: \nCoordenada x = " << p2.obtGeo().obtC_X() << endl
       << "Coordenada y = " << p2.obtGeo().obtC_Y() << endl
       << "Metros sobre el nivel del mar = " << p2.obtGeo().obtMSNM() << endl
       << "Altura total = " << p2.obtHT() << "\n\n";

  glacial1.defC_X(44.2);
  glacial1.defC_Y(123.4);
  glacial1.defMSNM("15.4");

  /*cout << "2 intento: \n Latitud glacial1:" << glacial1.obtC_X() << endl << "Longitud glacial1:"
   * <<  glacial1.obtC_Y() << endl << "Altura glacial1:" << glacial1.obtMSNM() << endl;*/

  return 0;
}

string convertirFecha(string fecha) {

  string anio = fecha.substr(0, 4);
  string mes = fecha.substr(5, 2);
  string dia = fecha.substr(8, 2);
  string hora = fecha.substr(11, 2) + "." + fecha.substr(14, 2);

  int mes1 = stoi(mes) - 1;

  vector<string> meses{"ene", "feb", "mar", "abr", "may", "jun",
                       "jul", "ago", "sep", "oct", "nov", "dic"};
  string fechaTotal = dia + "/" + meses[mes1] + "/" + anio + " " + hora;

  return fechaTotal;
  
}

void crearMatriz(vector<vector<string>> &matriz) {
  string delimiter = " ";
  size_t pos = 0;
  for (string line; getline(cin, line);) {
    vector<string> datos{};
    line += " parche";

    while ((pos = line.find(delimiter)) != string::npos) {
      datos.push_back(line.substr(0, pos));
      line.erase(0, pos + delimiter.length());
    }
    matriz.push_back(datos);
  }
}

void filas(vector<vector<string>> matriz) {
  for (int i = 0; i < matriz.size(); i++) {
    for (int j = 1; j < matriz[0].size(); j++) {
      cout << matriz[i][j] << " ";
    }
    cout << "\n";
  }
}

void columnas(vector<vector<string>> matriz) {
  for (int i = 0; i < matriz[0].size(); i++) {
    for (int j = 0; j < matriz.size(); j++) {
      cout << matriz[j][i] << " ";
    }
    cout << "\n";
  }
}