#include <iostream>
#include <string>

using namespace std;


int main(){
    string lat = "-33.6517", orientacion, coord;

    if(lat[0] == "-"){
        orientacion = "S";
        cout << lat[0];
       // lat.erase(lat[0]);
    }
    else
        orientacion = "N";
    
    //cout << lat; 
    
    /*
    coord += lat.substr(lat[0], lat.find("."));

    int num = stoi( lat.substr(lat.find(".")+1, lat.size() ));

    cout << num;*/

    return 0;
}