// cafeteria.h 

#ifndef CAFETERIA_H
#define CAFETERIA_H

#include <string>

#define MAX_PRODUCTOS 100

struct Producto {
    std::string nombre;
    float precio;
};

extern Producto menu[MAX_PRODUCTOS];
extern int cantidadProductos;

void mostrarInterfaz();
void venderProductos();
void mostrarProductos();
void anadirProductos();
void eliminarProducos();

#endif