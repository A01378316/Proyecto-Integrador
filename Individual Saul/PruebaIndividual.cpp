#include <iostream>
#include "FotoPerfil.h"
using namespace std;

int main(){
    FotoPerfil f1;
    cout << "Largo: " + to_string(f1.getLargo()) << endl;
    cout << "Ancho: " + to_string(f1.getAncho()) << endl;
    cout << "Color: " + to_string(f1.getColor()) << endl;

    f1.cambiarColor();

    cout << "\nLargo: " + to_string(f1.getLargo()) << endl;
    cout << "Ancho: " + to_string(f1.getAncho()) << endl;
    cout << "Color: " + to_string(f1.getColor()) << endl;

    f1.cambiarTamanio();

    cout << "\nLargo: " + to_string(f1.getLargo()) << endl;
    cout << "Ancho: " + to_string(f1.getAncho()) << endl;
    cout << "Color: " + to_string(f1.getColor()) << endl;

    f1.cambiarFoto();

    cout << "\nLargo: " + to_string(f1.getLargo()) << endl;
    cout << "Ancho: " + to_string(f1.getAncho()) << endl;
    cout << "Color: " + to_string(f1.getColor()) << endl;

    FotoPerfil f2{524, 524, true};
    cout << "\nLargo: " + to_string(f2.getLargo()) << endl;
    cout << "Ancho: " + to_string(f2.getAncho()) << endl;
    cout << "Color: " + to_string(f2.getColor()) << endl;
}