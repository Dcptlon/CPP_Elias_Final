//Elias arzamendia
#include <iostream>¿
using namespace std;
int main(){
    int n1, n2, n3;
    cout << "Ingrese tres numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Tercer numero: ";
    cin >> n3;
    cout << endl;
    bool ordenAscendente(n1 >= n2 && n2 >= n3);
    bool ordenDescendente(n3 >= n2 && n2 >= n1);
    bool ordenDesordenado = !(ordenAscendente || ordenDescendente);
    ordenAscendente && cout << "Los numeros ingresados estan en orden ascendente";
    ordenDescendente && cout << "Los numeros ingresados estan en orden descendente";
    ordenDesordenado && cout << "Los numeros ingresados estan desordenados";
    return 0;
}
