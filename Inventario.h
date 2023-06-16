/*
 *  Proyecto Tienda_Superautos
 *  Inventario.h
 *  c++
 *  A01710263
 *  Created by José Omar Martínez on 23/05/23.
 *  Esta clase define objeto de tipo Inventario que contiene un arreglo con todos los vehiculos creados
 *  Contiene todas las operaciones para calcular el precio de los vehiculos, imprimirlos y agregarlos al arreglo
 *  Esta clase es utilizada por la funcipon principal del programa y es parte del programa de la tienda "Superautos"
 */

#ifndef Inventario_h
#define Inventario_h

#include<iostream>// Para imprimir

using namespace std;

class Inventario{
    // Declaro los atributos privados
private:
    Vehiculo * vehiculos[100]; //Se define como apuntador para poder usar polimorfismo
    int indice;
    int precios[100];
    int cont = 0;

    //Declaro los métodos públicos
public:
    Inventario():indice(0){}; //Constructor por default
    void agrega_vehiculo(Vehiculo*);
    void imprime();
    void imprime_todo();
    //Declaro función calculaPrecio que será sobrecargada
    void calculaPrecio(int, string, int, string, int);
    void calculaPrecio(int, string, int, string, string);
    void calculaPrecio(int, string, int, string, float);
    void filtra_por_año(int);
    void filtra_por_marca(string);
    void filtra_por_color(string);
};

/**
 * calculaPrecio calcula el precio final del objeto dependiendo sus caracteristicas
 * función sobrecargada donde el último parametro es de tipo int lo que la hace diferente
 *
 * param int año, string marca, int potencia, string color, int aceleracion
 * return
 */

void Inventario::calculaPrecio(int anio, string marca, int potencia, string color, int aceleracion){
    int precio_base = 900000; //Este es el precio base, si el usuario elige las caracteristicas más sencillas este será su precio.
    int precio = precio_base; //Se inicializa la variable precio para ir sumándole según las características.
    if(anio==2021){
        precio = precio_base; // Se queda igual el precio si se elige el año más viejo
        if(marca=="mercedez"){
            precio = precio_base; //Se queda igual el precio si se elige esta marca
            if(potencia==288){
                precio = precio_base; //Se queda igual el precio si se elige esta potencia
                if(aceleracion==312){
                    precio = precio_base; //Se queda igual el precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000;  //Se le suma al precio si elige esa potencia
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                
            }
        }
        
        else if(marca=="porsche"){
            precio = precio + 200000; //Se le suma al precio si elige esta marca
            if(potencia==288){
                precio = precio + 0; //Se queda igual el precio si elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000; //Se le suma al precio si elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; // Se queda igual el precio con esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
    
    else if(anio==2022){
        precio = 900000 + 80000; //Se le suma al precio si se elige este año
        if(marca=="mercedez"){
            precio = precio+0;  //Se queda igual el precio si elige esta marca
            if(potencia==288){
                precio = precio + 0;  //Se queda igual el precio si elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0;  //Se queda igual el precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000; //Se le suma al precio si se elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
        else if(marca=="porsche"){
            precio = precio + 200000; //Se le suma al precio si se elige esta marca
            if(potencia==288){
                precio = precio + 0; //Se queda igual el precio si elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000; //Se le suma al precio si se elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
    
    else{
        precio = precio_base + 160000;
        if(marca=="mercedez"){
            precio = precio + 0; //Se queda igual el precio si se elige esta marca
            if(potencia==288){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
        else if(marca=="porsche"){
            precio = precio + 200000; //Se le suma al precio si se elige esta marca
            if(potencia==288){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==320){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(aceleracion==312){
                    precio = precio + 0; //Se queda igual el precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(aceleracion == 388){
                    precio = precio + 54000; //Se le suma al precio si se elige esta aceleración
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
}


/**
 * calculaPrecio calcula el precio final del objeto dependiendo sus caracteristicas
 * función sobrecargada donde el último parametro es de tipo float lo que la hace diferente
 *
 * param int año, string marca, int potencia, string color, float tamaño
 * return
 */
void Inventario::calculaPrecio(int anio, string marca, int potencia, string color, float tamaño){
    int precio_base = 700000; //Este es el precio base, si el usuario elige las caracteristicas más sencillas este será su precio.
    int precio = precio_base; //Se inicializa la variable precio para ir sumándole según las características.
    if(anio==2021){
        precio = precio_base; // Se queda igual el precio si se elige el año más viejo
        if(marca=="toyota"){
            precio = precio_base; //Se queda igual el precio si se elige esta marca
            if(potencia==208){
                precio = precio_base; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                
            }
        }
        
        else if(marca=="bmw"){
            precio = precio + 200000; //Se le suma al precio si se elige esta marca
            if(potencia==208){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
        }
    }
    
    else if(anio==2022){
        precio = 700000 + 80000; //Se le suma al precio si se elige este año
        if(marca=="toyota"){
            precio = precio+0; //Se queda igual el precio si se elige esta marca
            if(potencia==208){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
        }
        else if(marca=="bmw"){
            precio = precio + 200000; //Se le suma al precio si se elige esta marca
            if(potencia==208){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
        }
    }
    
    else{
        precio = precio_base + 160000; //Se le suma al precio si se elige el año 2023
        if(marca=="toyota"){
            precio = precio + 0; //Se queda igual el precio si se elige esta marca
            if(potencia==208){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
        }
        else if(marca=="bmw"){
            precio = precio + 200000; //Se le suma al precio si se elige esta marca
            if(potencia==208){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
            else if(potencia==252){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                cont++;//Se incrementa cont para poder guardar el siguiente precio en la posición correcta
            }
        }
    }
}

/**
 * calculaPrecio calcula el precio final del objeto dependiendo sus caracteristicas
 * función sobrecargada donde el último parametro es de tipo string lo que la hace diferente
 *
 * param int año, string marca,  int potencia,  string color, string transmision
 * return
 */

void Inventario::calculaPrecio(int anio, string marca, int potencia, string color, string transmision){
    int precio_base = 400000; //Este es el precio base, si el usuario elige las caracteristicas más sencillas este será su precio.
    int precio = precio_base; //Se inicializa la variable precio para ir sumándole según las características.
    if(anio==2021){
        precio = precio_base; // Se queda igual el precio si se elige el año más viejo
        if(marca=="nissan"){
            precio = precio_base; //Se queda igual el precio si se elige esta marca
            if(potencia==174){
                precio = precio_base; //Se queda igual el precio si se elige esta potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmision
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
        
        else if(marca=="mazda"){
            precio = precio + 200000; //Se le suma al precio si elige esta marca
            if(potencia==174){
                precio = precio + 0; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl;//Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
    
    else if(anio==2022){
        precio = 400000 + 80000; //Se le suma al precio si elige ese año
        if(marca=="nissan"){
            precio = precio+0; //Se queda igual el precio si se elige esta marca
            if(potencia==174){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
        else if(marca=="mazda"){
            precio = precio + 200000; //Se le suma al precio si elige esa marca
            if(potencia==174){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
    
    else{
        precio = precio_base + 160000; //Se le suma al precio si elige el año 2023
        if(marca=="nissan"){
            precio = precio + 0; //Se queda igual el precio si se elige esta marca
            if(potencia==174){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
        else if(marca=="mazda"){
            precio = precio + 200000; //Se le suma al precio si elige esa marca
            if(potencia==174){
                precio = precio + 0; //Se queda igual el precio si se elige esta potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
            else if(potencia==223){
                precio = precio + 100000; //Se le suma al precio si elige esa potencia
                if(transmision=="standard"){
                    precio = precio + 0; //Se queda igual el precio si se elige esta transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
                else if(transmision == "automatico"){
                    precio = precio + 62000; //Se le suma al precio si elige esa transmisión
                    cout<<"precio final de su vehículo: "<<precio<<endl; //Se imprime el precio final
                    precios[cont] = precio; //Se agrega el precio al arreglo de precios para cuando se ocupe imprimirlos todos juntos
                    cont++; //Se incrementa cont para poder guardar el siguiente precio en la posición correcta
                }
            }
        }
    }
}


/**
 * Función que imprime el objeto mediante la funcion to_string
 */
void Inventario::imprime(){
    cout << vehiculos[indice - 1]->to_string();
}
    
/**
 * agrega_vehiculo agrega objetos en vehiculos[]
 * haciendo uso de la variable indice va guardando los objetos haciendo uso de apuntadores
 *
 */

void Inventario::agrega_vehiculo(Vehiculo* veh){
        vehiculos[indice] = veh;
        indice ++;
    }


/**
 * Función que imprime todos los objetos del arreglo vehiculos mediante la funcion to string
 */
void Inventario::imprime_todo(){
    cout << "A continuación se muestran todos sus vehículos personalizados: " << endl;
    for(int i = 0; i < indice; i++){
        cout << "Vehículo número: " << i+1 << "\n " << vehiculos[i]->to_string();
        cout << "Precio: " << precios[i] << endl; //Se imprime el precio del vehículo con el arreglo de precios dandóle la posición
    }
}

/**
 * Función que filtra los objetos dependiendo su año y los imprime con la función to_string
 */
void Inventario::filtra_por_año(int anio){
    for(int i = 0; i < indice; i ++){
        //Se hace uso del getter de año
        if(vehiculos[i]->getAño()==anio){
            cout << "Vehículo número: " << i+1 << "\n " << vehiculos[i]->to_string();
            cout << "Precio: " << precios[i] << endl;
        }
    }
    // Se imprime este mensaje por si no ha creado ningun vehículo con esta característica
    cout << "(Nota: Si no se muestran vehículos, no ha creado ningún vehículo con esta caracteristica)" << endl;
}


/**
 * Función que filtra los objetos dependiendo su marca y los imprime con la función to_string
 */
void Inventario::filtra_por_marca(string marca){
    for(int i = 0; i < indice; i ++){
        //Se hace uso del getter de marca
        if(vehiculos[i]->getMarca()==marca){
            cout << "Vehículo número: " << i+1 << "\n " << vehiculos[i]->to_string();
            cout << "Precio: " << precios[i] << endl;
        }
    }
    // Se imprime este mensaje por si no ha creado ningun vehículo con esta característica
    cout << "(Nota: Si no se muestran vehículos, no ha creado ningún vehículo con esta caracteristica)" << endl;
}


/**
 * Función que filtra los objetos dependiendo su color y los imprime con la función to_string
 */
void Inventario::filtra_por_color(string col){
    for(int i = 0; i < indice; i ++){
        //Se hace uso del getter de color
        if(vehiculos[i]->getColor()==col){
            cout << "Vehículo número: " << i+1 << "\n " << vehiculos[i]->to_string();
            cout << "Precio: " << precios[i] << endl;
        }
    }
    // Se imprime este mensaje por si no ha creado ningun vehículo con esta característica
    cout << "(Nota: Si no se muestran vehículos, no ha creado ningún vehículo con esta caracteristica)" << endl;
}
    
#endif /* Inventario_h */
