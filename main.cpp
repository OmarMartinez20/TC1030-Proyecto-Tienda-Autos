//
//  main.cpp
//  Proyecto123344
//
//  Created by José Omar Martínez on 11/06/23.
//

#include <iostream>
#include <sstream>
#include "Vehiculo.h"
#include "Sedan.h"
#include "Deportivo.h"
#include "Camioneta.h"
#include "Inventario.h"

int main(){
    Inventario inv;
    int año, potencia, aceleracion, opcion;
    string marca, color, transmision;
    float tamaño;
    cout << "Bienvenido a la tienda superautos: " << endl;
    cout << "¿Que tipo de auto deseas personalizar?" << endl;
    cout << "(1)Deportivo   (2)Sedán   (3)Camioneta    (Digita el número de la opción deseada)" << endl;
    cin>>opcion;
    if(opcion==1){
        cout << "Dame el año de tu deportivo: 2021   2022   2023  (Digita el año)" << endl;
        cin>>año;
        cout << "Dame la marca:  Mercedez Porshe  (Escribe la marca)" << endl;
        cin>>marca;
        cout << "Dame la potencia: 288   320" << endl;
        cin>>potencia;
        cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;
        cin>>color;
        cout << "Dame la aceleración de tu vehículo: 312   388 " << endl;
        cin>>aceleracion;
        
        
        Vehiculo * d = new Deportivo(año, marca, potencia, color, aceleracion);
        inv.agrega_vehiculo(d);
        inv.imprime();
        inv.calculaPrecio(año, marca, potencia, color, aceleracion);
    }
    
    else if(opcion==2){
        cout << "Dame el año de tu deportivo: 2021   2022   2023  (Digita el año)" << endl;
        cin>>año;
        cout << "Dame la marca:  Nissan   Mazda  (Escribe la marca)" << endl;
        cin>>marca;
        cout << "Dame la potencia: 174   223" << endl;
        cin>>potencia;
        cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;
        cin>>color;
        cout << "Dame el tipo de transmisión que deseas: Standard o Automatico " << endl;
        cin>>transmision;
        
        Vehiculo * s = new Sedan(año, marca, potencia, color, transmision);
        inv.agrega_vehiculo(s);
        inv.imprime();
        inv.calculaPrecio(año, marca, potencia, color, transmision);
    }
    
    else if(opcion==3){
        cout << "Dame el año de tu deportivo: 2021   2022   2023  (Digita el año)" << endl;
        cin>>año;
        cout << "Dame la marca:  Toyota   Bmw  (Escribe la marca)" << endl;
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
        inv.calculaPrecio(año, marca, potencia, color, transmision);
    }
    
}
