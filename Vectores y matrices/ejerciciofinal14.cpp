//Elias arzamendia
#include <iostream>
using namespace std;
int main() {
    int matriz[2][2];
    int suma = 0;

    cout << "Ingrese los elementos de la matriz 2x2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento en la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            suma += matriz[i][j];
        }
    }
    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}
