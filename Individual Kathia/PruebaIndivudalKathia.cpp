#include "PerfilUsuario.h"
#include <iostream>
using namespace std;

int main()
{
    //Prueba de Perfil de Usuario
    cout<<"***PRUEBAS DE CLASE SISTEMA***"<<endl;
    PerfilUsuario p1{"Kathia", "Alegre.Vendedora con enfoque deportivo","kathia.bz@hotmail.com"};
    cout << "Perfil 1 " <<endl;
    cout << "Nombre: " << p1.getNombre_perfil() << ", ";
    cout << "Descripción: " << p1.getDescripcion() << ", ";
    cout << "Correo elctrónico: "<<p1.getCorreo()<<"."<<endl;
    

    p1.setNombre_perfil("Kathbz");
    p1.setCorreo("cambiocorreo@hotmail.com");

    cout << "\nPerfil 1 actualizado " <<endl;
    cout << "Nombre: " << p1.getNombre_perfil() << ", ";
    cout << "Descripción: " << p1.getDescripcion() << ", ";
    cout << "Corre elctrónico: "<<p1.getCorreo()<<"."<<endl;


    
        

    return 0;
}