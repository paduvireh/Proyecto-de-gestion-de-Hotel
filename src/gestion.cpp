//gestion.cpp 
#include "gestion.h"
#include <iostream>
#include <string>

using namespace std;

//Variables globales
USUARIO usuarios[100];
int TotalUsuarios=0;

//Codigo de las funciones 
void registrar_usuario(USUARIO& usuario){
    if(TotalUsuarios>=100){
        cout<<"Error";
        return;
    }

    cout<<"Nombre: ";
    cin.ignore();
    getline(cin,usuario.Nombre); //Desde la entrada va a leer el nombre completo
    cout<<"DNI: ";
    cin.ignore();
    getline(cin,usuario.DNI);
    cout<<"Edad: ";
    cin>>usuario.edad;

    usuario.num_Habitacion=-1;
    TotalUsuarios++;
}

//Mostrar habitaciones disponibles del panel.h

//Reservar habitacione
void reservarHabitacion(){
    string DNI;
    cout<<"Ingrese su DNI: ";
    cin>>DNI;

    for(int i=0; i<TotalUsuarios;i++){
        if(usuarios[i].DNI==DNI){
            if(usuarios[i].num_Habitacion==-1){
                cout<<"Habitacion reservada con exito";
                //asignar una habitacion en num_Habitacion esto deberia pasarse a panel.cpp
                return;
            }

        }
    }
}