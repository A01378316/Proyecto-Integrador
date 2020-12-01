//Programa de definición de clase Perfil Usuario 
//Autor: Kathia Bejarano Zamora A01378316 
//Ultima modificación: 30 de Noviembre del 2020
#ifndef PERFILUSUARIO_C
#define PERFILUSUARIO_C
#include <iostream>
using namespace std;
#include "FotoPerfil.h"
#include "Carpeta.h"


class PerfilUsuario{
    private:
        string nombre_perfil;
        string historial;
        string descripcion;
        Carpeta carpeta;
        FotoPerfil foto{};
        string correo;
     
    public:
        PerfilUsuario() = default;
        PerfilUsuario(string nombre_perfil, string descripcion,string correo){
            this->nombre_perfil = nombre_perfil;
            this->descripcion = descripcion;
            this->correo = correo;
            this->foto = foto;
        }

        string getNombre_perfil(){return nombre_perfil;}
        string getCorreo(){return correo;}
        string getDescripcion(){return descripcion;}
        Carpeta getCarpeta(){return carpeta;}
        FotoPerfil getFoto(){return foto;}

        void setNombre_perfil(string nombre_perfil){this->nombre_perfil = nombre_perfil;}
        void setDescripcion(string descripcion){this->descripcion = descripcion;}
        void setCorreo(string correo){this->correo = correo;}
        
        void creacion(){
            cout << "\n***Finalmente crearemos tu perfil de usuario como más te guste***"<<endl;
            cout << "\nIntroduce el nombre de tu perfil sin espacios ";cin >> nombre_perfil;
            cout << "\n Introduce tu correo electrónico: ";cin >> correo;
            cout << "\nEscriba una descripción de su persona(atención los espacios se introducen con guion bajo): "; cin >> descripcion;
        }
         void clasificar(){
             string seleccion;
             string area;
             cout << "\n¿Le gustaria clasificarse para dirigirse a un publico en específico? "; cin>>seleccion;
            if (seleccion == "Si"){
                cout << "\nSeleccione el area deseada: Joven, Niños o Adultos: ";cin>>area;
                cout << "\n¡GENIAL! Ahora su perfil se encamina al público: "<<area<<endl;
            }
            else if (seleccion == "No"){
                cout << "\nSu público por defecto es: público en general"<<endl;
            }
            else {
                cout << "\nOpción incorrecta";
        
         }
         }
         void verTutorial(){
             string regresa;
             string tuto;
             cout<<"\n¿Desea ver tutoriales nuevamente?"; cin >> regresa;
            if (regresa == "Si"){
                cout<<"\n¿Tutorial Compra o Venta?"; cin >> tuto;
                if (tuto == "Compra"){
                  carpeta.mostrar_compra();
             }
                else if (tuto == "Venta"){
                  carpeta.mostrar_venta();
                }
                 else {
                 cout << "Opción incorrecta";
            } 
            }
            else if(regresa=="No"){
           cout<< "Ok"<<endl;
           }
           else{
               cout<<"Opcion no válida"<<endl;
           }

            
         }
};
#endif

