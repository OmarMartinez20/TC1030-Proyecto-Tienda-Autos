/*
*  Proyecto Tienda_superautos
*  Sedan.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 29/05/23.
*/

#ifndef Sedan_h
#define Sedan_h
//Bibliotecas
#include "Vehiculo.h"
#include <iostream>
#include <string>
//Declaro la clase Sedan que hereda de Vehiculo
class Sedan: public Vehiculo{
private:
    //Atributos
    string tipo_transmision;
public:
    //Metodos
    Sedan();//Constructor vacío
    Sedan(int anio, string mar, int pot, string col, string tipo): Vehiculo(anio, mar, pot, col){
        tipo_transmision = tipo;
    }
    string getTipo_transmision();
    void setTipo_transmision(string tipo);
    string to_string();
};


/**
 * to_string convierte a atributos a string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 */
string Sedan::to_string(){
    stringstream aux;
    aux << " Su vehículo personalizado tiene las siguientes caracterísitcas: " << " año: " << año << "\n " <<  " marca: " << marca << "\n " <<" potencia: " << potencia << "\n " <<" color: " << color << "\n " << " tipo de transmisión: " << tipo_transmision << "\n ";
    return aux.str();
}

/**
 * Getter para obtener el tipo de transmision
 *
 */
string Sedan::getTipo_transmision(){
    return tipo_transmision;
}

/**
 * Setter para modificar el tipo de transmisión
 *
 */
void Sedan::setTipo_transmision(string tipo){
    tipo_transmision = tipo;
}
    
#endif /* Sedan_h */



