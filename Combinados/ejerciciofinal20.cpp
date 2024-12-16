//Elias arzamendia
#include <iostream>
#include <string>
using namespace std;
string desencriptarPalabra(const string& palabraEncriptada, int clave);
void mostrarPalabraDesencriptada(const string& palabraEncriptada);

int main() {
    string palabraEncriptada;
    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    mostrarPalabraDesencriptada(palabraEncriptada);

    return 0;
}

string desencriptarPalabra(const string& palabraEncriptada, int clave) {
    string palabraDesencriptada = "";
    for (char letra : palabraEncriptada) {
        char letraDesencriptada = letra - clave;
        palabraDesencriptada += letraDesencriptada;
    }
    return palabraDesencriptada;
}

void mostrarPalabraDesencriptada(const string& palabraEncriptada) {
    for (int clave = 1; clave <= 5; ++clave) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }
}

