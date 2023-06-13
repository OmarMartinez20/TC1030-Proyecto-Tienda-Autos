/*
*  Proyecto Tienda_superautos
*  Camioneta.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 29/05/23.
*/


#ifndef Camioneta_h
#define Camioneta_h
//Bibliotecas
#include "Vehiculo.h"
#include <iostream>
#include <string>
//Declaro la clase Camioneta que hereda de Vehiculo
class Camioneta: public Vehiculo{
private:
    //Atributos
    float tamaño;
public:
    //Metodos
    Camioneta();//Constructor vacío
    Camioneta(int anio, string mar, int pot, string col, float tam): Vehiculo(anio, mar, pot, col){
        tamaño = tam;
    }
    
    float getTamanio();
    void setTamanio(float tam);
    string to_string();
};

/**
 * to_string convierte a atributos a string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 */

string Camioneta::to_string(){
    stringstream aux;
    aux << " Su vehículo personalizado tiene las siguientes caracterísitcas: " << " año: " << año << "\n " << " marca: " << marca << "\n " << " potencia: " << potencia << "\n " << " color: " << color << "\n " << " medida del vehículo a lo largo: " << tamaño << "\n ";
    return aux.str();
}

/**
 * Getter para obtener el tamaño
 *
 */
float Camioneta::getTamanio(){
    return tamaño;
}

/**
 * Setter para modificar el tamaño
 *
 */
void Camioneta::setTamanio(float tam){
    tamaño = tam;
}


#endif /* Camioneta_h */


