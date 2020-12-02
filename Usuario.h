//Programa clase Usuario 
//Autores: Kathia Bejarano Zamora A01378316 Saul Ramirez Barragan A01745146
//Ultima modificación: 30 de Noviembre del 2020
#ifndef USUARIO_C
#define USUARIO_C
#include <iostream>
#include <vector>
#include "Carpeta.h"
using namespace std;

class Usuario{
    private:
        string nombre;
        int edad;
        string direccion;
        Carpeta carpeta;
       
    public:
        Usuario() = default;
        Usuario(string nombre, int edad,string direccion){
            this->nombre = nombre;
            this->direccion = direccion;
            this->edad = edad;
            this->carpeta = carpeta;
        }

        string getNombre(){return nombre;}
        string getDireccion(){return direccion;}
        int getEdad(){return edad;}

        void setNombre(string nombre){this->nombre = nombre;}
        void setEdad(int edad){this->edad = edad;}
        void setDireccion(string direccion){this->direccion = direccion;}
        

        void introducir(){
            cout << "Introduce tu nombre completo (los espacios introducirlos con guión bajo): "; cin >> nombre;
            cout << "\nIntroduce tu edad: "; cin >> edad;
            cout << "\nIntroduce tu direccion: (los espacios introducirlos con guión bajo)"; cin >> direccion;

        }

        void imprime_datos(){
            cout<<"El nombre de usuario es: "<<nombre<<endl;
            cout<<"La edad del usuario es: "<<edad<<endl;
            cout<<"La direccion del usuario es: "<<direccion<<endl;
        }

        void seleccionar(){
                int opc = 1;
                int intereses[3];
                int i = 0;
                cout << "\nEscriba el numero del interes deseado (Maximo 3 y separados por enter): " << endl;
                cout << "1) Hogar" << endl;
                cout << "2) Entretenimiento" << endl;
                cout << "3) Deporte" << endl;
                cout << "4) Ropa" << endl;
                cout << "5) Belleza" << endl;
                while (i < 3 && opc>=1 && opc<=5){
                cout << "Opcion " + to_string(i+1) + ": "; cin >> opc ;
                intereses[i]=opc;
                i++;
                }
                
            }

        void elegir_tipo(){
            string selec;
            cout << "Seleccione el tipo de carpeta que quiera abrir: (Compra o Venta) "; cin >> selec;
            if (selec == "Compra"){
                carpeta.mostrar_compra();
            }
            else if (selec == "Venta"){
                carpeta.mostrar_venta();
            }
            else {
                cout << "Opción incorrecta";
            } 
        }
};

#endif