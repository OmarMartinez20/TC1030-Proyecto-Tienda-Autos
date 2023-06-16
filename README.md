# TC1030-Proyecto-Tienda-Autos
José Omar Martínez Espinosa (A01710263) Este proyecto fue creado con el propósito de facilitarle al usuario la elección de su vehículo permitiendole personalizar su vehículo de muchas maneras y visualizar su precio final. 

CONTEXTO Una tienda de autos pide realizar un programa para que el usuario pueda elegir fácilmente su vehículo y sus características. Esta tienda cuenta con 3 tipos de Vehículos (deportivo, sedán y camioneta) por lo que el usuario deberá elegir una opción para posteriormente elegir sus características. Al finalizar, el programa le arrojará el precio final de su vehículo. El programa también cuenta con un inventario para ir guardando los objetos creados y proporcionarle todos los vehículos que ha creado al usuario.

FUNCIONALIDAD El programa le perimte al usuario elegir por medio de un menú, que tipo de vehículo desea personalizar. Una vez que selecciona el tipo de vehículo, el programa le pedirá al usuario que elija las características según el tipo de vehículo y al finalizar su personalización le mostrará el precio final. Una vez terminado, el programa le preguntará si desea crear otro vehículo o si desea salir. En el menú, el programa también dará la opción para filtrar los vehículos creados por el usuario para facilitarle su visualización según la caracteristica que elija. Cuando el usuario desee salir del programa, el programa le imprimirá todos sus vehículos creados con sus respectivos precios.

CONSIDERACIONES el programa solamente compila en la consola y esta hecho con c++ estándar por lo cual corre en cualquier sistema operativo. compliación: "g++ Inventario.h Deportivo.h Sedan.h Vehiculo.h Camioneta.h main.cpp "

CASOS EN LOS QUE EL PROGRAMA FALLARÍA: el programa puede presentar fallas si el usuario no digita la opción como lo indica el programa ya que no calcularía el precio del vehículo. En caso de que el usuario digite una opción de otro tipo de dato al que se le pide, el programa crashearía. Si el usuario elige la opción de imprimir y filtrar sin haber creado ninún vehículo, el programa también fallaría.

CORRECCIONES Para este programa se realizaronn las siguientes correciones:
1. Se identificó y redactó los casos en los que el programa fallaría.
2. Se implementó la creación de objetos de manera dinámica.
3. Se implementó el uso de clases abstractas para aplicar polimorfismo.
Después de la revisión opcional final, se hicieron las siguientes correciones como lo sugirió el Profesor:
1. Se creó una función para imprimir todos los objetos del arreglo de vehículos.
2. Se agregaró documentación detallada para facilitar el entendimiento del programa.
3. Se eliminaron los getters y setters que no se utilizaban en el programa.
4. Se crearon las funciones de filtrar por año, marca y color para hacer uso correcto de los getters como fue sugerido por el Profesor.
