//Elias arzamendia
#include <iostream>
using namespace std;
int suma(int n1, int n2){
    return n1 + n2;
}
int resta(int n1, int n2){
    return n1 - n2;
}
int multiplicacion(int n1, int n2){
    return n1 * n2;
}
float division(int n1, int n2) {
    if (n2 == 0) {
        cout << "Indefinida" << endl;
        return 0;
    }
    return static_cast<float>(n1) / static_cast<float>(n2);
}
int main(){
    int n1, n2;
    cout << "Ingrese dos numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << endl;
    cout << "El resultado de la suma es: " << suma(n1, n2) << endl;
    cout << "El resultado de la resta es: " << resta(n1, n2) << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion(n1, n2) << endl;
    cout << "El resultado de la division es: " << division(n1, n2) << endl;
    return 0;
}


