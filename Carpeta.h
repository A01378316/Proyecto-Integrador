//Programa clase Sistema
//Autores: Kathia Bejarano Zamora A01378316 Saul Ramirez Barragan A01745146
//Ultima modificación: 30 de Noviembre del 2020
#ifndef CARPETA_C
#define CARPETA_C
#include <iostream>
using namespace std;

class Carpeta{
    private:
        string nombre;
        string clasificacion;
        string ubicacion;
        float tamanio;
       
    public:
        Carpeta(){
            nombre = "Tutoriales";
            clasificacion = "General";
            ubicacion = "Usuario";
            tamanio = 105.8;
        }
        Carpeta(string nombre, float tamanio,string ubicacion, string clasificacion){
            this->nombre = nombre;
            this->ubicacion = ubicacion;
            this->tamanio = tamanio;
            this->clasificacion = clasificacion;
            
        
        }

        string getNombre(){return nombre;}
        string getUbicacion(){return ubicacion;}
        string getClasificacion(){return clasificacion;}
        float getTamanio(){return tamanio;}
        


        void setNombre(string nombre){this->nombre = nombre;}
        void setTamanio(float tamanio){this->tamanio = tamanio;}
        void setUbicacion(string ubicacion){this->ubicacion = ubicacion;}
        void setClasificacion(string clasificacion){this->clasificacion = clasificacion;}
        

        void mostrar_venta(){
            cout << "***Bienvendio al Tutorial para vender en nuestra aplicación, deberás seguir las siguientes instrucciones:***" << endl;
            cout << "\n1.- Click en --publicar producto--" << endl;
            cout << "2.- Adjuntar imagen y descripción del producto" << endl;
            cout << "3.- Click en --Finalizar--" << endl;
        
        }

         void mostrar_compra(){
            cout << "***Bienvendio al Tutorial para comprar en nuestra aplicación, deberás seguir las siguientes instrucciones:***" << endl;
            cout << "\n1.- Click en --Busqueda-- y escribir nombre y tipo de articulo" << endl;
            cout << "2.- Navegar y seleccionar producto deseado" << endl;
            cout << "3.- Seleccionar método de pago y ordenar" << endl;
        }

        void verPropiedades(){
            cout << "Nombre: " + nombre << endl;
            cout << "Tamanio: " + to_string(tamanio) << endl;
            cout << "Ubicacion: " + ubicacion << endl;
            cout << "Clasificacion: " + clasificacion << endl;
        }
};
#endif