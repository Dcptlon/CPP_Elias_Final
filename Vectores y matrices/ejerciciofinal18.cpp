//Elias Arzamendia
#include <iostream>
using namespace std;
void calcularMayor(int n1, int n2, int n3, int &mayor){
   if (n1 >= n2 && n1 >= n3) {
        mayor = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        mayor = n2;
    } else {
        mayor = n3;
    }
}

int main(){
    int n1, n2, n3, mayor;
    cout << "Ingrese tres numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Tercer numero: ";
    cin >> n3;
    calcularMayor(n1, n2, n3, mayor);
    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}

