/*
 *  Proyecto Tienda_superautos
 *  Camioneta.h
 *  c++
 *  A01710263
 *  Created by José Omar Martínez on 29/05/23.
 *  Calse Camioneta hija de clase Vehiculo 
 */


#ifndef Camioneta_h
#define Camioneta_h
//Bibliotecas
#include "Vehiculo.h"
#include <iostream> //Para imprimir
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

string Camioneta::to_string(){
    stringstream aux;
    aux << " Su vehículo personalizado tiene las siguientes caracterísitcas: " << "\n " << " año: " << año << "\n " << " marca: " << marca << "\n " << " potencia: " << potencia << "\n " << " color: " << color << "\n " << " medida del vehículo a lo largo: " << tamaño << "\n ";
    return aux.str();
}

/**
 * Getter para obtener el tamaño
 *
 */
float Camioneta::getTamanio(){
    return tamaño;
}


#endif /* Camioneta_h */
