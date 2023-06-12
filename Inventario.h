//
//  Inventario.h
//  Tienda_superautos
//
//  Created by José Omar Martínez on 05/06/23.
//

#ifndef Inventario_h
#define Inventario_h
#include<iostream>

using namespace std;

class Inventario{
private:
    Vehiculo * vehiculos[1000];
    int vehiculos_creados;
    int indice;
public:
    Inventario():indice(0){};
    void agrega_vehiculo(Vehiculo*);
    void imprime();
    int calculaPrecio(int, string, int, string, int);
    int calculaPrecio(int, string, int, string, string);
    int calculaPrecio(int, string, int, string, float);
    
    
};

int Inventario::calculaPrecio(int anio, string marca, int potencia, string color, int aceleracion){
    int precio_base = 900000;
    int precio = precio_base;
    if(anio==2021){
        precio = precio_base;
        if(marca=="Mercedez"){
            precio = precio_base;
            if(potencia==288){
                precio = precio_base;
                if(aceleracion==312){
                    precio = precio_base;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                
            }
        }
        
        else if(marca=="Porshe"){
            precio = precio + 200000;
            if(potencia==288){
                precio = precio + 0;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    
    else if(anio==2022){
        precio = 900000 + 80000;
        if(marca=="Mercedez"){
            precio = precio+0;
            if(potencia==288){
                precio = precio + 0;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
        else if(marca=="Porshe"){
            precio = precio + 200000;
            if(potencia==288){
                precio = precio + 0;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    
    else{
        precio = precio_base + 160000;
        if(marca=="Mercedez"){
            precio = precio + 0;
            if(potencia==288){
                precio = precio + 0;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
        else if(marca=="Porshe"){
            precio = precio + 200000;
            if(potencia==288){
                precio = precio + 0;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==320){
                precio = precio + 100000;
                if(aceleracion==312){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(aceleracion == 388){
                    precio = precio + 54000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    return precio;
}


int Inventario::calculaPrecio(int anio, string marca, int potencia, string color, float tamaño){
    int precio_base = 700000;
    int precio = precio_base;
    if(anio==2021){
        precio = precio_base;
        if(marca=="Toyota"){
            precio = precio_base;
            if(potencia==208){
                precio = precio_base;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
                
            }
        }
        
        else if(marca=="BMW"){
            precio = precio + 200000;
            if(potencia==208){
                precio = precio + 0;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
        }
    }
    
    else if(anio==2022){
        precio = 700000 + 80000;
        if(marca=="Toyota"){
            precio = precio+0;
            if(potencia==208){
                precio = precio + 0;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
        }
        else if(marca=="BMW"){
            precio = precio + 200000;
            if(potencia==208){
                precio = precio + 0;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
        }
    }
    
    else{
        precio = precio_base + 160000;
        if(marca=="Toyota"){
            precio = precio + 0;
            if(potencia==208){
                precio = precio + 0;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
        }
        else if(marca=="BMW"){
            precio = precio + 200000;
            if(potencia==208){
                precio = precio + 0;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
            else if(potencia==252){
                precio = precio + 100000;
                cout<<"precio final de su vehículo: "<<precio<<endl;
            }
        }
    }
    return precio;
}

int Inventario::calculaPrecio(int anio, string marca, int potencia, string color, string transmision){
    int precio_base = 400000;
    int precio = precio_base;
    if(anio==2021){
        precio = precio_base;
        if(marca=="Nissan"){
            precio = precio_base;
            if(potencia==174){
                precio = precio_base;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
        
        else if(marca=="Mazda"){
            precio = precio + 200000;
            if(potencia==174){
                precio = precio + 0;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    
    else if(anio==2022){
        precio = 400000 + 80000;
        if(marca=="Nissan"){
            precio = precio+0;
            if(potencia==174){
                precio = precio + 0;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
        else if(marca=="Mazda"){
            precio = precio + 200000;
            if(potencia==174){
                precio = precio + 0;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    
    else{
        precio = precio_base + 160000;
        if(marca=="Nissan"){
            precio = precio + 0;
            if(potencia==174){
                precio = precio + 0;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
        else if(marca=="Mazda"){
            precio = precio + 200000;
            if(potencia==174){
                precio = precio + 0;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
            else if(potencia==223){
                precio = precio + 100000;
                if(transmision=="Standard"){
                    precio = precio + 0;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
                else if(transmision == "Automatico"){
                    precio = precio + 62000;
                    cout<<"precio final de su vehículo: "<<precio<<endl;
                }
            }
        }
    }
    return precio;
}

void Inventario::imprime(){
    for(int i = 0; i < indice; i++){
        cout << vehiculos[i]->to_string();
    }
}
    
    

void Inventario::agrega_vehiculo(Vehiculo* veh){
        vehiculos[indice] = veh;
        indice ++;
    }

#endif /* Inventario_h */
