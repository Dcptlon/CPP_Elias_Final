//Elias arzamendia
#include <iostream>
#define PI 3.1416
using namespace std;
float area(float n){
    return PI * (n * n);
}

float circunferencia(float n){
    return 2 * PI * n;
}

int main(){
    float n1;
    cout << "Ingrese el radio del circulo: ";
    cin >> n1;
    cout << endl;
    cout << "El area es: " << area(n1) << endl;
    cout << "La circunferencia es: " << circunferencia(n1) << endl;
    return 0;
}
