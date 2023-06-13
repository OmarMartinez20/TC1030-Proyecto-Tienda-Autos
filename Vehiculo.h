/*
*  Proyecto Tienda_Superautos
*  Vehículo.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 23/05/23.
*/

#ifndef Vehi_culo_h
#define Vehi_culo_h
#include <iostream>//Para imprimir

using namespace std;

//Declaración de clase Vehículo que es abstracta
class Vehiculo{
protected:// Para que puedan heredar las clases hijas
    //Declaro los atributos
    int año;
    string marca;
    int potencia;
    string color;
    float rating;
    
public:
    //Declaro métodos
    Vehiculo();
    Vehiculo(int, string, int, string);
    int getAño();
    string getMarca();
    int getPotencia();
    string getColor();
    void setAño(int anio);
    void setMarca(string mar);
    void setPotencia(int pot);
    void setColor(string col);
    virtual string to_string() = 0; //método abstracto que será sobreescrito
};

/**
 * Constructor que recibe los valores año, marca, potencia, color
 */
Vehiculo::Vehiculo(int anio, string mar, int pot, string col){
    año = anio;
    marca = mar;
    potencia = pot;
    color = col;
}

/**
 * Getter para obtener el año
 */
int Vehiculo::getAño(){
    return año;
}

/**
 * Getter para obtener la marca
 */
string Vehiculo::getMarca(){
    return marca;
}

/**
 * Getter para obtener la potencia
 */
int Vehiculo::getPotencia(){
    return potencia;
}

/**
 * Getter para obtener el color
 */
string Vehiculo::getColor(){
    return color;
}

/**
 * Setter de año
 */
void Vehiculo::setAño(int anio){
    año = anio;
}

/**
 * Setter de marca
 */
void Vehiculo::setMarca(string mar){
    marca = mar;
}

/**
 * Setter de potenica
 */
void Vehiculo::setPotencia(int pot){
    potencia = pot;
}

/**
 * Setter de color
 */
void Vehiculo::setColor(string col){
    color = col;
}


#endif /* Vehiculo_h */
