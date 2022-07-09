#include <iostream>
#include <string>

using namespace std;

typedef struct hoja{

    string abreviatura;
    string nombre;
    struct hoja *sig;

}hoja;

typedef hoja *lista;

void Agregar(lista &L, string abr, string nom){

    lista p, q;
    p = new hoja;
    q = new hoja;
    p->abreviatura = abr;
    p->nombre = nom;
    p->sig = NULL;

    if(L == NULL)

        L = p;
    
    else{

        q = L;

        while(q->sig != NULL){
            q = q->sig;
        }

        q->sig = p;
    }
}

void mostrar(lista L){
    lista p = L;

    while(p != NULL){
        cout << "Abreviatura " << p->abreviatura << " corresponde a " << p->nombre << endl;
        p = p->sig;
    }
}

string Notacion(lista L, string abr){

    lista p = L;

    while(p != NULL){
        if(p->abreviatura == abr)
            return p->nombre;
    }

    return "xd";
}



void creacion(lista &L){

    Agregar(L, "OGJS", "Rio Olivares - Glaciar Juncal Sur");
    Agregar(L, "OGSO", "Rio Olivares - Gran Salto de Olivares");
    Agregar(L, "OEPC", "Rio Olivares - Estero Picarte");
    Agregar(L, "OECF", "Río Olivares - Estero Cordillera Ferrosa");
    Agregar(L, "OETL", "Río Olivares - Estero Tabolango");
    Agregar(L, "OELP", "Río Olivares - Estero de las Pircas");
    Agregar(L, "OQMH", "Río Olivares - Quebrada Mil Hojas");
    Agregar(L, "OELC", "Río Olivares - Estero Lomas Coloradas");
    Agregar(L, "OEPT", "Río Olivares - Estero Potrillos");
    Agregar(L, "ORCR", "Río Olivares - Río Colorado");
    Agregar(L, "CETG", "Río Colorado - Estero del Tupungatito");
    Agregar(L, "CPQD", "Río Colorado - Quebrada del Perdido");
    Agregar(L, "CEQB", "Río Colorado - Estero del Quebrado");
    Agregar(L, "CEMN", "Río Colorado - Estero de la Mona");
    Agregar(L, "CEBA", "Río Colorado - Estero Blandas Aguas");
    Agregar(L, "CRMS", "Río Colorado - Río Museo");
    Agregar(L, "CELV", "Río Colorado - Estero La Vaca");
    Agregar(L, "CRMP", "Río Colorado - Río Maipo");
    Agregar(L, "MEMT", "Rio Maipo - Esteros Manzanito");
    Agregar(L, "MECC", "Rio Maipo - Estero Coyanco");
    Agregar(L, "MQLC", "Río Maipo - Quebrada La Calchona");
    Agregar(L, "MEES", "Rio Maipo - Estero el Sauce");
    Agregar(L, "MEEM", "Rio Maipo - Estero el Manzano");
    Agregar(L, "MRCR", "Rio Maipo - Rio Clarillo");
    Agregar(L, "MRYS", "Río Maipo - Río Yeso");
    Agregar(L, "YEYS", "Río Yeso - Embalse El Yeso");
    Agregar(L, "YESN", "Río Yeso - Estero San Nicolas");
    Agregar(L, "EEYS", "Embalse El Yeso");
    Agregar(L, "ATIR", "Zanjón de la Aguada - Tramo soterrado Isabel Riquelme");
    Agregar(L, "ATAS",  "Zanjón de la Aguada - Tramo soterrado Autopista del Sol");
    Agregar(L, "ACSC", "Zanjón de la Aguada - Canal San Carlos");
    Agregar(L, "ARMP", "Zanjón de la Aguada - Río Mapocho");

}