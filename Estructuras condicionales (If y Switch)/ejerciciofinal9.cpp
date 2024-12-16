// Elias Arzamendia
#include <iostream>
using namespace std;

int suma(int n1, int n2) {
    return n1 + n2;
}

int resta(int n1, int n2) {
    return n1 - n2;
}

int multiplicacion(int n1, int n2) {
    return n1 * n2;
}

float division(int n1, int n2) {
    if (n2 == 0) {
        cout << "Indefinida. " << endl;
        return 0;
    }
    return static_cast<float>(n1) / static_cast<float>(n2);
}

int main() {
    int option;
    int n1, n2;

    do {
        cout << "MENU DE OPERACIONES ARITMETICAS" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion (1-5): ";
        cin >> option;

        if (option < 1 || option > 5) {
            cout << "Valor invalido. Ingrese un valor valido." << endl;
        } else if (option == 5) {
            cout << "Bye bye!" << endl;
            break;
        } else {
            cout << "Ingrese dos numeros:" << endl;
            cout << "Primer numero: ";
            cin >> n1;
            cout << "Segundo numero: ";
            cin >> n2;

            switch (option) {
                case 1:
                    cout << "El resultado de la suma es: " << suma(n1, n2) << endl;
                    break;
                case 2:
                    cout << "El resultado de la resta es: " << resta(n1, n2) << endl;
                    break;
                case 3:
                    cout << "El resultado de la multiplicacion es: " << multiplicacion(n1, n2) << endl;
                    break;
                case 4:
                    cout << "El resultado de la division es: " << division(n1, n2) << endl;
                    break;
            }
        }
        cout << endl;
    } while (true);
    return 0;
}
