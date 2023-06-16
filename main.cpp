/*
*  Proyecto Tienda "Superautos"
* José Omar Martínez Espinosa
* A01710263
*  main.cpp
*  c++
*
*  Created by José Omar Martínez on 29/05/23.
*
* Descripción: este es un programa de la clase Pensamiento Computacional Orientado a Objetos.
* Es un programa de la tienda "Superautos" que permite al usuario personalizar su vehículo y visualizar su precio final.
* Este programa permite crear 3 tipos diferentes de vehículos y seleccionar sus características.
* El usuario también puede filtrar sus vehículos personalizados por año, marca o color para que se muestren en pantalla.
*/


#include <iostream>  //para imprimir
//Bibliotecas con objetos de mi proyecto
#include "Vehiculo.h"
#include "Sedan.h"
#include "Deportivo.h"
#include "Camioneta.h"
#include "Inventario.h"

using namespace std;

int main(){
    Inventario inv;
    int año, potencia, aceleracion, opcion, continuar, eleccion, filtrar, filtraAño; //Variables de tipo int que se usarán
    string marca, color, transmision, filtraMarca, filtraColor; //Variables de tipo string que se usarán
    float tamaño; //Variable de tipo float que se usará
    bool continua = true; // Variable de tipo bool que nos permite seguir el ciclo hasta que sea false.
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir
    while (continua == true){
        cout << "Bienvenido a la tienda superautos: " << endl;
        cout << "¿Que tipo de auto deseas personalizar?" << endl;
        // Preguntamos al usuario que tipo de vehículo desea
        cout << "(1)Deportivo   (2)Sedán   (3)Camioneta    (4)Imprimir Vehiculos creados y filtrarlos  (5)Salir  (Digita el número de la opción deseada)" << endl;
        //Leemos lo que el usuario selecciona y lo almacenamos en la variable opcion
        cin>>opcion;
        //Dependiendo el número de opcion el programa entrará en alguna de las opciones
        if(opcion==1){
            //Si elige esta opción se le piden las características al usuario para crear el deportivo
            cout << "Dame el año de tu deportivo: 2021   2022   2023  (Digita el año)" << endl;//Se pide el año
            cin>>año;//Se almacena el año
            cout << "Dame la marca:  mercedez   porsche  (Escribe la marca)" << endl;//Se pide la marca
            cin>>marca;//Se almacena la marca
            cout << "Dame la potencia: 288   320" << endl;//Se pide la potencia
            cin>>potencia;//Se almacena la potencia
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;//Se pide el color
            cin>>color;//Se almacena el color
            cout << "Digita la aceleración de tu vehículo: 312   388 " << endl;//Se pide la aceleración
            cin>>aceleracion; //Se guarda la aceleración
            
            //new crea el objeto en tiempo de ejecución para usar polimorfismo
            Vehiculo * d = new Deportivo(año, marca, potencia, color, aceleracion);
            //Se usa la función agrega_vehiculo, se le da como parámetro el objeto creado para agregarlo al arreglo
            inv.agrega_vehiculo(d);
            //Se usa la función imprime para impirmir las caracteristicas del objeto
            inv.imprime();
            //Se usa la función calculaPrecio que está sobrecargada. El último parámetro es de tipo int por lo que se usará la función que corresponde al deportivo
            inv.calculaPrecio(año, marca, potencia, color, aceleracion);
            cout<<"¿Desea personalizar otro vehículo? (1)Si, regresar al menú   (2)No, salir "<<endl;
            //Se le pregunta al usuario si desea regresar al menú o salir del programa
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar; //Se guarda su elección
            if(continuar==1){
                continue; //Regresa al menú
            }
            else if(continuar==2){
                cout << "Ha decidido salir de la tienda: " << endl;
                break; //Se rompe el ciclo y sale del programa
            }
        }
        
        else if(opcion==2){
            //Si elige esta opción se le piden las características al usuario para crear el sedan
            cout << "Dame el año de tu sedán: 2021   2022   2023  (Digita el año)" << endl;//Se pide el año
            cin>>año;//Se almacena el año
            cout << "Dame la marca:  nissan   mazda  (Escribe la marca)" << endl;//Se pide la marca
            cin>>marca;//Se almacena la marca
            cout << "Dame la potencia: 174   223" << endl;//Se pide la potencia
            cin>>potencia;//Se almacena la potencia
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;//Se pide el color
            cin>>color;//Se almacena el color
            cout << "Dame el tipo de transmisión que deseas: standard o automatico " << endl;//Se pide el tipo de transmisión
            cin>>transmision;// Se guarda el tipo de transmisión
            
            //new crea el objeto en tiempo de ejecución para usar polimorfismo
            Vehiculo * s = new Sedan(año, marca, potencia, color, transmision);
            //Se usa la función agrega_vehiculo, se le da como parámetro el objeto creado para agregarlo al arreglo
            inv.agrega_vehiculo(s);
            //Se usa la función imprime para impirmir las caracteristicas del objeto
            inv.imprime();
            //Se usa la función calculaPrecio que está sobrecargada. El último parámetro es de tipo string por lo que se usará la función que corresponde al sedan
            inv.calculaPrecio(año, marca, potencia, color, transmision);
            cout<<"¿Desea personalizar otro vehículo? (1)Si, regresar al menú   (2)No, salir "<<endl;
            //Se le pregunta al usuario si desea regresar al menú o salir del programa
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar;//Se guarda su elección
            if(continuar==1){
                continue;//Regresa al menú
            }
            else if(continuar==2){
                cout<<"Ha decidido salir de la tienda: " << endl;
                break;//Se rompe el ciclo y sale del programa
            }
        }
        
        else if(opcion==3){
            //Si elige esta opción se le piden las características al usuario para crear la camioneta
            cout << "Dame el año de tu camioneta: 2021   2022   2023  (Digita el año)" << endl;//Se pide el año
            cin>>año;//Se almacena el año
            cout << "Dame la marca:  toyota   bmw  (Escribe la marca)" << endl;//Se pide la marca
            cin>>marca;//Se almacena la marca
            cout << "Dame la potencia: 208   252" << endl;//Se pide la potencia
            cin>>potencia;//Se almacena la potencia
            cout << "Escribe el color: negro   blanco   rojo (El color no afecta el precio de tu vehículo) " << endl;//Se pide el color
            cin>>color;//Se almacena el color
            cout << "Dame el tamaño de largo de tu camioneta en m:  2.12    2.58 " << endl;//Se pide el tamaño
            cin>>tamaño;//Se almacena el tamaño
            
            //new crea el objeto en tiempo de ejecución para usar polimorfismo
            Vehiculo * c = new Camioneta(año, marca, potencia, color, tamaño);
            //Se usa la función agrega_vehiculo, se le da como parámetro el objeto creado para agregarlo al arreglo
            inv.agrega_vehiculo(c);
            //Se usa la función imprime para impirmir las caracteristicas del objeto
            inv.imprime();
            //Se usa la función calculaPrecio que está sobrecargada. El último parámetro es de tipo string por lo que se usará la función que corresponde al sedan
            inv.calculaPrecio(año, marca, potencia, color, tamaño);
            cout<<"¿Desea personalizar otro vehículo? (1)Si, regresar al menú   (2)No, salir "<<endl;
            //Se le pregunta al usuario si desea regresar al menú o salir del programa
            cout<<"Digite el número de opción: "<<endl;
            cin>>continuar;//Se guarda su elección
            if(continuar==1){
                continue;//Regresa al menú
            }
            
            else if(continuar==2){
                cout << "Ha decidido salir de la tienda: " << endl;
                break;//Se rompe el ciclo y sale del programa
            }
        }
        
        else if(opcion == 4){
            //Se usa la función imprime_todo para que el usuario visualice todos sus vehiculos creados
            inv.imprime_todo();
            cout << "¿Quieres filtrar tus vehiculos por caracteristicas?" << endl;//Se pregunta al usuario si quiere fitrar
            cout << "(1) Si   (2) No   (Digita el número de opción)" << endl;
            cin>>eleccion;//Se guarda su respuesta
            if(eleccion==1){
                //Sele pregunta al usuario la caracteristica que desea filtrar
                cout << "¿Por que caracteristica deseas filtrar?" << endl;
                cout << "(1) Año   (2) Marca   (3) Color (Digita el número de opción)" << endl;
                cin>>filtrar;//Se guarda su elección
                if(filtrar==1){
                    //Si elige el año, se le pregunta al usuario el año a filtrar
                    cout << "De que año deseas mostrar los vehiculos?" << endl;
                    cout << "(1) 2021   (2) 2022   (3) 2023   (Digita el número de opción)" << endl;
                    cin>>filtraAño;//Se guarda el año a filtrar
                    inv.filtra_por_año(filtraAño); //Se usa la función filtrar_por_año para desplegar solo los vehiculos de ese año
                }
                else if (filtrar==2){
                    //Si elige la marca, se le pregunta al usuario la marca a filtrar
                    cout << "De que marca deseas mostrar los vehiculos?" << endl;
                    cout << "mercedez    porsche    nissan    mazda     toyota    bmw   (Escribe la marca)" << endl;
                    cin>>filtraMarca;//Se guarda la marca a filtrar
                    inv.filtra_por_marca(filtraMarca);//Se usa la función filtrar_por_marca para desplegar solo los vehiculos de esa marca
                }
                else if (filtrar==3){
                    //Si elige el color, se le pregunta al usuario el color a filtrar
                    cout << "De que color deseas mostrar los vehiculos?" << endl;
                    cout << "negro   blanco   rojo   (Escribe el color)" << endl;
                    cin>>filtraColor;//Se guarda el color a filtrar
                    inv.filtra_por_color(filtraColor);//Se usa la función filtrar_por_color para desplegar solo los vehiculos de ese color
                }
            }
        }
        
        else if(opcion == 5){
            //Si elige esta opción el ciclo while se termina y se imprime un mensaje de despedida
            continua = false;
            cout<<"Ha decidido salir de la tienda."<<endl;
        }
        else{
            //Si digita otro número que no este en el menú, se imprimirá este mensaje
            cout << "Opción inválida. Por favor digite otra opción" << endl;
        }
    }
    //Antes de terminar el programa, se le proporcionará al usuario todos los vehículos que personalizó
    cout << "Resumen " << endl;
    inv.imprime_todo();
    cout<<"Gracias por visitar la tienda Superautos. Vuelva pronto."<<endl;
    return 0;//El programa finaliza con éxito
}
