
//Programa clase Sistema
//Autores: Kathia Bejarano Zamora A01378316 Saul Ramirez Barragan A01745146
//Ultima modificación: 30 de Noviembre del 2020
#ifndef SISTEMA_C
#define SISTEMA_C
#include <iostream>
using namespace std;
class Sistema{
    private:
        bool sesion{false};
        string nombre{""};
        string contrasenia{""};
       
       

public:
    

    public:
        Sistema() = default;
        Sistema(string nombre, string contrasenia, bool sesion){
            this->nombre = nombre;
            this->contrasenia = contrasenia;
            this->sesion = sesion;
        }

        string getNombre(){return nombre;}
        string getContrasenia(){return contrasenia;}
        bool getSesion(){return sesion;}

        void setNombre(string nombre){this->nombre = nombre;}
        void setContrasenia(string contrasenia){this->contrasenia = contrasenia;}
        
    

        void crear(){
            cout << "\nTu nombre de usuario es: " + nombre + " \nTu contrasña es: " + contrasenia + " \n****¡Bienvenido!****\n";
        }

        void iniciar(){
            string n;
            string contra;
            int intentos = 0;
            while (intentos <= 3){
                cout << "\nEscriba el nombre de usuario: "; cin >> n;
                cout << "\nEscriba la contraseña: "; cin >> contra;
                if (n == nombre && contra == contrasenia){
                    cout << "****Ha ingresado correctamente****" << endl;
                    sesion = true;
                    break;
                }
                else{
                    cout << "****Contraseña y/o nombre de usuario incorrectos, intentelo de nuevo.***" << endl;
                    intentos++;
                }
            }
        }

        void cerrar(){
            sesion = false;
            cout << "+++Gracias por tu visita+++"<<endl;
            exit(0);
        }
                    
        
};
#endif
