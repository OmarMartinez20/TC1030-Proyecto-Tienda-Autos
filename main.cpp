/*
 * Proyecto Nómina main
 * José Omar Martínez Espinosa
 * A01710263
 * 12/06/2023
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que permite al cliente
 * personalizar su vehículo, y nos permite calcular el precio para cada tipo de
 * característica que elija.
 */


#include <iostream>  //para imprimir
#include <sstream>
//Bibliotecas con objetos de mi proyecto
#include "Vehiculo.h"
#include "Sedan.h"
#include "Deportivo.h"
#include "Camioneta.h"
#include "Inventario.h"

int main(){
    Inventario inv;
    int año, potencia, aceleracion, opcion, continuar;
    string marca, color, transmision;
    float tamaño;
    bool continua = true;
    
    while (continua == true){
        cout << "Bienvenido a la tienda superautos: " << endl;
        cout << "¿Que tipo de auto deseas personalizar?" << endl;
        cout << "(1)Deportivo   (2)Sedán   (3)Camioneta    (4)Salir    (Digita el número de la opción deseada)" << endl;
        cin>>opcion;
        if(opcion==1){
            cout << "Dame el año de tu deportivo: 2021   2022   2023  (Digita el año)" << endl;
            cin>>año;
            cout << "Dame la marca:  mercedez   porsche  (Escribe la marca)" << endl;
            cin>>marca;
            cout << "Dame la potencia: 288   320" << endl;
            cin>>potencia;
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;
            cin>>color;
            cout << "Digita la aceleración de tu vehículo: 312   388 " << endl;
            cin>>aceleracion;
            
            //Se crea el objeto dinámico
            Vehiculo * d = new Deportivo(año, marca, potencia, color, aceleracion);
            inv.agrega_vehiculo(d);
            inv.imprime();
            inv.calculaPrecio(año, marca, potencia, color, aceleracion);
            cout<<"¿Desea personalizar otro vehículo? (1)Si   (2)No "<<endl;
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar;
            if(continuar==1){
                continue;
            }
            else if(continuar==2){
                break;
            }
        }
        
        else if(opcion==2){
            cout << "Dame el año de tu sedán: 2021   2022   2023  (Digita el año)" << endl;
            cin>>año;
            cout << "Dame la marca:  nissan   mazda  (Escribe la marca)" << endl;
            cin>>marca;
            cout << "Dame la potencia: 174   223" << endl;
            cin>>potencia;
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;
            cin>>color;
            cout << "Dame el tipo de transmisión que deseas: standard o automatico " << endl;
            cin>>transmision;
            
            Vehiculo * s = new Sedan(año, marca, potencia, color, transmision);
            inv.agrega_vehiculo(s);
            inv.imprime();
            inv.calculaPrecio(año, marca, potencia, color, transmision);
            cout<<"¿Desea personalizar otro vehículo? (1)Si   (2)No "<<endl;
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar;
            if(continuar==1){
                continue;
            }
            else if(continuar==2){
                break;
            }
        }
        
        else if(opcion==3){
            cout << "Dame el año de tu camioneta: 2021   2022   2023  (Digita el año)" << endl;
            cin>>año;
            cout << "Dame la marca:  toyota   bmw  (Escribe la marca)" << endl;
            cin>>marca;
            cout << "Dame la potencia: 208   252" << endl;
            cin>>potencia;
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;
            cin>>color;
            cout << "Dame el tamaño de largo de tu camioneta en m:  2.12    2.58 " << endl;
            cin>>tamaño;
            
            Vehiculo * c = new Camioneta(año, marca, potencia, color, tamaño);
            inv.agrega_vehiculo(c);
            inv.imprime();
            inv.calculaPrecio(año, marca, potencia, color, tamaño);
            cout<<"¿Desea personalizar otro vehículo? (1)Si   (2)No "<<endl;
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar;
            if(continuar==1){
                continue;
            }
            else if(continuar==2){
                break;
            }
        }
        
        else if(opcion == 4){
            //Si elige esta opción el ciclo while se termina y se imprime un mensaje de despedida
            continua = false;
            cout<<"Ha decidido salir de la tienda."<<endl;
        }
    }
    cout<<"Gracias por visitar la tienda Superautos. Vuelva pronto."<<endl;
    return 0;//El programa finaliza con éxito
}
