/*
 *  Proyecto Tienda_superautos
 *  Deportivo.h
 *  c++
 *  A01710263
 *  Created by José Omar Martínez on 29/05/23.
 *  Calse Dportivo hija de clase Vehiculo
 */

#ifndef Deportivo_h
#define Deportivo_h
//Bibliotecas
#include "Vehiculo.h"
#include <iostream>
#include <string>
#include <sstream>
//Declaro la clase Sedan que hereda de Vehiculo
class Deportivo: public Vehiculo{
private:
    //Atributos
    int aceleracion_max;
public:
    //Metodos
    Deportivo();//Constructor vacío
    Deportivo(int anio, string mar, int pot, string col, int aceleracion): Vehiculo(anio, mar, pot, col){
        aceleracion_max = aceleracion;
    }
    int getAceleracion();
    string to_string();
};

/**
 * Getter para obtener la aceleracion máxima
 *
 */
int Deportivo::getAceleracion(){
    return aceleracion_max;
}


/**
 * to_string convierte a atributos a string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * param
 * return string con los valores y texto concatenado.
 */
string Deportivo::to_string(){
    stringstream aux;
    aux << " Su vehículo personalizado tiene las siguientes caracterísitcas: " << "\n " << " año: " << año << "\n " << " marca: " << marca << "\n " << " potencia " << potencia << "\n " << " color " << color << "\n " << " aceleracion " << aceleracion_max << "\n ";
    return aux.str();
}


#endif /* Deportivo_h */
