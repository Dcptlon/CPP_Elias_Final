//Elias arzamendia
#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << "Ingrese dos numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;

    bool mayorPrimero(n1 > n2);
    bool mayorSegundo(n1 < n2);
    bool iguales(n1 == n2);

    mayorPrimero && cout << "El primer numero es mayor al segundo";
    mayorSegundo && cout << "El segundo numero es mayor al primero";
    iguales && cout << "Ambos numeros son iguales";

    return 0;
}
