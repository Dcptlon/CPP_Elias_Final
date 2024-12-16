//Elias Arzamendia
#include <iostream>
#include <algorithm>
using namespace std;
float promedio(float n1, float n2, float n3){
     return (n1 + n2 + n3) / 3;
}
float diferenciaEntreMayores(float n1, float n2){
    return n1 - n2;
}
int main() {
    float n1, n2, n3;
    cout << "Ingrese tres numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Tercer numero: ";
    cin >> n3;
    cout << endl;

    float mayor = max({n1, n2, n3});
    float menor = min({n1, n2, n3});

    cout << "El promedio es: " << promedio(n1, n2, n3) << endl;
    cout << "La diferencia entre el mayor numero y el menor numero es: " << diferenciaEntreMayores(mayor, menor) << endl;

    return 0;
}
