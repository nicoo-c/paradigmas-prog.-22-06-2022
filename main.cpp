#include <iostream>
#include <string>
#include <vector>
#include <typeinfo> //borrar

using namespace std;


string convertirFecha(string fecha){
    string año = fecha.substr(0,4);
    string mes = fecha.substr(5,2);
    string dia = fecha.substr(8,2);
    string hora = fecha.substr(11,2) + "." + fecha.substr(14,2);

    int mes1 = stoi(mes) - 1;

    vector<string> meses{"ene", "feb", "mar", "abr", "may", "jun", "jul", "ago", "sep", "oct", "nov", "dic"};
    string fechaTotal = dia + "/" + meses[mes1] + "/" + año + " " + hora;

    return fechaTotal;
}


int main() {

    string delimiter = " ";
    vector<vector<string>> matriz{};
    size_t pos = 0;

    for (string line; getline(cin, line);) {
        vector<string> datos{};

        if(line == "exit")
            break;

        line += " parche";

        while((pos = line.find(delimiter)) != string::npos){
            datos.push_back(line.substr(0, pos));
            line.erase(0, pos + delimiter.length());
          
        }

        matriz.push_back(datos);

    }

    cout << "\n\n";


// VISTA POR COLUMNAS
    for(int i = 0; i < matriz[0].size(); i++){
        for(int j = 0; j < matriz.size(); j++){

            cout << "Posición " << i << "," << j << " : " << matriz[j][i] << " ";
            cout << endl;
        }
        cout << "\n";
    }

//Vista por filas chupalo nico

   /* for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[0].size(); j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }*/


    string fecha = convertirFecha(matriz[1][0]);

    cout << "\n" <<  fecha ;

    return 0;
}


