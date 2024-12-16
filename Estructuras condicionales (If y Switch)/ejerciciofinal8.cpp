// Elias Arzamendia
#include <iostream>
using namespace std;
void fechaSegunNumero(int fecha){
    switch (fecha) {
        case 1:
            cout << "El dia correspondiente es Lunes." << endl;
            break;
        case 2:
            cout << "El dia correspondiente es Martes." << endl;
            break;
        case 3:
            cout << "El dia correspondiente es Miercoles." << endl;
            break;
        case 4:
            cout << "El dia correspondiente es Jueves." << endl;
            break;
        case 5:
            cout << "El dia correspondiente es Viernes." << endl;
            break;
        case 6:
            cout << "El dia correspondiente es Sabado." << endl;
            break;
        case 7:
            cout << "El dia correspondiente es Domingo." << endl;
            break;
    }
}

int main() {
    int fecha;
    do {
        cout << "Ingrese un numero (1-7): ";
        cin >> fecha;
        if (fecha < 1 || fecha > 7) {
            cout << "Valor invalido. Ingrese un valor valido" << endl;
        }
    } while (fecha < 1 || fecha > 7);

    cout << endl;
    fechaSegunNumero(fecha);

    return 0;
}
