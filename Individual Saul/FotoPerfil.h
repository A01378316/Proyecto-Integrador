//Programa de definción de Clase FotoPerfil
//Autor: Saul Ramirez Barragan A01745146
//Ultima modificación: 30 de Noviembre del 2020
#ifndef FOTOPERFIL_C
#define FOTOPERFIL_C
#include <iostream>
using namespace std;

class FotoPerfil{
    private:
        float largo;
        float ancho;
        bool color;
       
    public:
        FotoPerfil(){
            largo = 252;
            ancho = 252;
            color = false; 
        }
        FotoPerfil(float largo, float ancho, bool color){
            this->largo = largo;
            this->ancho = ancho;
            this->color = color;
        }

        float getLargo(){return largo;}
        float getAncho(){return ancho;}
        bool getColor(){return color;}

        void setLargo(float largo){this->largo = largo;}
        void setAncho(float ancho){this->ancho = ancho;}
        void setColor(bool color){this->color = color;}
        

        void cambiarColor(){
            if (color == true){
                color = false;
            }
            else{
                color = true;
            }
        }

        void cambiarFoto(){
            int resp;
            cout<<"\nEscriba el largo de la imagen: "; cin >> largo;
            cout<<"Escriba el ancho de la imagen: "; cin >> ancho;
            cout<<"Color = 1         Blanco y negro = 2" << endl;
            while (1!=resp && resp!=2){
            cout<<"Opcion: "; cin >> resp;
            if (resp == 1){
                color = true;
            }
            else if(resp == 2){
                color = false;
            }
            else{
                cout << "Opcion no valida" << endl;
            }
            }
        }

        void cambiarTamanio(){
            cout<<"\nEscriba el nuevo largo de la imagen: "; cin >> largo;
            cout<<"Escriba el nuevo ancho de la imagen: "; cin >> ancho;
        }
};

#endif