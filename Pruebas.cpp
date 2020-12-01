#include <iostream>
using namespace std;
#include "Sistema.h"
#include "Usuario.h"
#include "Carpeta.h"


//Casos prueba de nuestro sistema 

int main()
{
    //Prueba de Sistema
    cout<<"***PRUEBAS DE CLASE SISTEMA***"<<endl;
    Sistema s{"Pedro", "123",false};;
    cout << "Sistema 1 " <<endl;
    cout << "Nombre: " << s.getNombre() << ",";
    cout << "Contraseña: " << s.getContrasenia() << ",";
    cout << "Estado de sesion: " << s.getSesion() << ",";
    

    Sistema s2 {"Juanita", "jiji",true};
    cout << "\nSistema 2" <<endl;
    cout << "Nombre: " << s2.getNombre() << ",";
    cout << "Contraseña:" << s2.getContrasenia() << ",";
    cout << "Estado de sesion: " << s2.getSesion() << ",";
    

    s.setNombre("Clara");
    s2.setContrasenia("Cambielacontraseña");

    cout << "\nSistema 1" <<endl;
    cout << "Nombre: " << s.getNombre() << ",";
    cout << "Contraseña:" << s.getContrasenia() << ",";
    

    cout << "\nSistema 2" <<endl;
    cout << "Nombre: " << s2.getNombre() << ",";
    cout << "Contraseña: " << s2.getContrasenia() << ",";
    cout << "Estado de sesion: " << s2.getSesion() << ","<<endl;
    
    //Prueba de Usuario 
    cout<<"\n***PRUEBAS DE CLASE USUARIO***"<<endl;
    Usuario u{"Juanita",33,"Mexico"};
    cout << "Nombre: " << u.getNombre() << ",";
    cout << "Edad: " << u.getEdad() << ",";
    cout << "Direccion: " << u.getDireccion() << "."<<endl;

    u.setDireccion("Ahora en Francia");
    u.setEdad(34);

    cout<<"Usuario actualizado: "<<endl;
    cout << "Nombre: " << u.getNombre() << ",";
    cout << "Edad: " << u.getEdad() << ",";
    cout << "Direccion: " << u.getDireccion() << "."<<endl;
    
    

    //Prueba de Carpeta
    Carpeta c{"Tuto", 23.4,"Escritorio","General"};
    cout<<"\n***PRUEBAS DE CLASE CARPETA***"<<endl;
    cout << "Carpeta 1 " <<endl;
    cout << "Nombre: " << c.getNombre() << ",";
    cout << "Tamaño: " << c.getTamanio() << ",";
    cout << "Ubicacion: " << c.getUbicacion() << ",";
    cout << "Clasifacion: " << c.getClasificacion() << "."<<endl;
    

    c.setNombre("Tutoriales");
    c.setUbicacion("Documentos importantes");
    cout << "Carpeta 1 actualizada " <<endl;
    cout << "Nombre: " << c.getNombre() << ",";
    cout << "Tamaño: " << c.getTamanio() << ",";
    cout << "Ubicacion: " << c.getUbicacion() << ",";
    cout << "Clasifacion: " << c.getClasificacion() << "."<<endl;

    Carpeta c2{"Fotitos", 40,"Escritorio","Personal"};;
    cout << "Carpeta 2 " <<endl;
    cout << "Nombre: " << c2.getNombre() << ",";
    cout << "Tamaño: " << c2.getTamanio() << ",";
    cout << "Ubicacion: " << c2.getUbicacion() << ",";
    cout << "Clasifacion: " << c2.getClasificacion() << "."<<endl;;
    

    return 0;
}