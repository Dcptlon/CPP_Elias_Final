// Elias Arzamendia
#include <iostream>
using namespace std;
int cuadradoDeUnNumero(int n1) {
    return n1 * n1;
}

int cuboDeUnNumero(int n1) {
    return n1 * n1 * n1;
}

int main() {
    int option;
    int n1;

    do {
        cout << "MENU DE OPERACIONES ARITMETICAS" << endl;
        cout << "1. Cuadrado de un numero" << endl;
        cout << "2. Cubo de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion (1-3): ";
        cin >> option;

        if (option < 1 || option > 3) {
            cout << "Valor invalido. Ingrese un valor valido." << endl;
        } else if (option == 3) {
            cout << "Bye bye!" << endl;
            break;
        } else {
            cout << "Ingrese un numero:" << endl;
            cin >> n1;

            switch (option) {
                case 1:
                    cout << "El resultado es: " << cuadradoDeUnNumero(n1) << endl;
                    break;
                case 2:
                    cout << "El resultado es: " << cuboDeUnNumero(n1) << endl;
                    break;
            }
        }
        cout << endl;
    } while (true);
    return 0;
}
