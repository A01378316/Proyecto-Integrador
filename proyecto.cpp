//Programa de aplicación sobre proyecto integrador
//Autores: Kathia Bejarano Zamora A01378316 Saul Ramirez Barragan A01745146
//Ultima modificación: 30 de Noviembre del 2020
#include <iostream>
#include <cmath>
using namespace std;
#include "Sistema.h"
#include "Usuario.h"
#include "Carpeta.h"
#include "PerfilUsuario.h"

int main()
{
    string n;
    string contra;
    string opc;
    string nom;
    string no;
    string nomb;
    string c;
    string d;
    float t;
    string ub; 
    string cl;
    bool sesion;

    Carpeta carp;
    int ed;
    string dir;
    // Para la creación de la sesión 
    //Equipo
    cout << "Bienvenido a la aplicación para entrar al mundo del mercado online\n "<<endl;
    cout << "Escriba el nombre de usuario que desea (solo una palabra): "; cin >> n;
    cout << "Escriba la contraseña: "; cin >> contra;
    Sistema s1 {n,contra,sesion};
    s1.crear();//Se crea la sesión

//Para iniciar sesión 
//Equipo 
    cout << "\n****INICIO DE SESIÓN****\n";
    s1.iniciar();

// Para el usuario 
//Equipo
    Usuario u1 {nom,ed,dir};
    u1.introducir();
    u1.imprime_datos();
    u1.seleccionar();
    cout << "A continuación elige el tutorial que deseas consultar"<<endl;
    u1.elegir_tipo();

//Para la carpeta
//Equipo
    Carpeta c1;
    cout << "\n¿Desea ver las propiedades de la carpeta? "; cin >> opc;
    if (opc == "Si"){
        c1.verPropiedades();}
    else{
        cout << "Ok" <<endl;
    }

    //Para el perfil de usuario
    //Codigo individual Kathia Bejarano 
    PerfilUsuario p1{nomb,d,c};
    p1.creacion();
    p1.clasificar();
    p1.verTutorial();
    

    cout << "\nDesea cerrar sesion? "; cin >> opc;
    if (opc == "Si"){
        s1.cerrar();
    }
    else{
        cout<<"Sigue navegando en tu espacio"<<endl;
    }

    return 0;
}