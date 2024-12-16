//Elias Arzamendia
#include <iostream>
#include <string>
using namespace std;
string encriptarPalabra(const string& palabra, int clave);
int main() {
    string palabra;
    int clave;
    cout << "Ingrese la palabra a encriptar: ";
    cin >> palabra;

    do {
        cout << "Ingrese una clave entre 1 y 5 para el encriptado: ";
        cin >> clave;
        if (clave < 1 || clave > 5) {
            cout << "Error. la clave debe ser un numero del 1 al 5. Intente nuevamente" << endl;
        }
    } while (clave < 1 || clave > 5);

    string palabraEncriptada = encriptarPalabra(palabra, clave);

    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}

string encriptarPalabra(const string& palabra, int clave) {
    string palabraEncriptada = "";
    for (char letra : palabra) {
        char letraEncriptada = letra + clave;
        palabraEncriptada += letraEncriptada;
    }
    return palabraEncriptada;
}
