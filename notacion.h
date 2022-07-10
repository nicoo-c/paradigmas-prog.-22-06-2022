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

    return "Indefinido";
}



void creacion(lista &L){

    Agregar(L, "OGJS", "\tRio Olivares - Glaciar Juncal Sur                      ");
    Agregar(L, "OGSO", "\tRio Olivares - Gran Salto de Olivares                  ");
    Agregar(L, "OEPC", "\tRio Olivares - Estero Picarte                          ");
    Agregar(L, "OECF", "\tRío Olivares - Estero Cordillera Ferrosa               ");
    Agregar(L, "OETL", "\tRío Olivares - Estero Tabolango                        ");
    Agregar(L, "OELP", "\tRío Olivares - Estero de las Pircas                    ");
    Agregar(L, "OQMH", "\tRío Olivares - Quebrada Mil Hojas                      ");
    Agregar(L, "OELC", "\tRío Olivares - Estero Lomas Coloradas                  ");
    Agregar(L, "OEPT", "\tRío Olivares - Estero Potrillos                        ");
    Agregar(L, "ORCR", "\tRío Olivares - Río Colorado                            ");
    Agregar(L, "CETG", "\tRío Colorado - Estero del Tupungatito                  ");
    Agregar(L, "CPQD", "\tRío Colorado - Quebrada del Perdido                    ");
    Agregar(L, "CEQB", "\tRío Colorado - Estero del Quebrado                     ");
    Agregar(L, "CEMN", "\tRío Colorado - Estero de la Mona                       ");
    Agregar(L, "CEBA", "\tRío Colorado - Estero Blandas Aguas                    ");
    Agregar(L, "CRMS", "\tRío Colorado - Río Museo                               ");
    Agregar(L, "CELV", "\tRío Colorado - Estero La Vaca                          ");
    Agregar(L, "CRMP", "\tRío Colorado - Río Maipo                               ");
    Agregar(L, "MEMT", "\tRio Maipo - Esteros Manzanito                          ");
    Agregar(L, "MECC", "\tRio Maipo - Estero Coyanco                             ");
    Agregar(L, "MQLC", "\tRío Maipo - Quebrada La Calchona                       ");
    Agregar(L, "MEES", "\tRio Maipo - Estero el Sauce                            ");
    Agregar(L, "MEEM", "\tRio Maipo - Estero el Manzano                          ");
    Agregar(L, "MRCR", "\tRio Maipo - Rio Clarillo                               ");
    Agregar(L, "MRYS", "\tRío Maipo - Río Yeso                                   ");
    Agregar(L, "YEYS", "\tRío Yeso - Embalse El Yeso                             ");
    Agregar(L, "YESN", "\tRío Yeso - Estero San Nicolas                          ");
    Agregar(L, "EEYS", "\tEmbalse El Yeso                                        ");
    Agregar(L, "ATIR", "\tZanjón de la Aguada - Tramo soterrado Isabel Riquelme  ");
    Agregar(L, "ATAS", "\tZanjón de la Aguada - Tramo soterrado Autopista del Sol");
    Agregar(L, "ACSC", "\tZanjón de la Aguada - Canal San Carlos                 ");
    Agregar(L, "ARMP", "\tZanjón de la Aguada - Río Mapocho                      ");

}