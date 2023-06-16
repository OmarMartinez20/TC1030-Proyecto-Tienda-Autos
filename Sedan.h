/*
 *
 *  Proyecto Tienda_superautos
 *  Sedan.h
 *  c++
 *  A01710263
 *  Created by José Omar Martínez on 29/05/23.
 *  Calse Sedan hija de clase Vehiculo
 */

#ifndef Sedan_h
#define Sedan_h
//Bibliotecas
#include "Vehiculo.h"
#include <iostream> //Para imprimir
#include <string>
#include <sstream>
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
    string to_string();
};


/**
 * to_string convierte a atributos a string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * param
 * return string con los valores y texto concatenado
 */
string Sedan::to_string(){
    stringstream aux;
    aux << " Su vehículo personalizado tiene las siguientes caracterísitcas: " << "\n " << " año: " << año << "\n " <<  " marca: " << marca << "\n " <<" potencia: " << potencia << "\n " <<" color: " << color << "\n " << " tipo de transmisión: " << tipo_transmision << "\n ";
    return aux.str();
}

/**
 * Getter para obtener el tipo de transmision
 *
 */
string Sedan::getTipo_transmision(){
    return tipo_transmision;
}

    
#endif /* Sedan_h */
