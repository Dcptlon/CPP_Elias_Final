//Elias arzamendia
#include <iostream>
using namespace std;
int main() {
    int referencia;
    int n1, n2, n3, n4, n5;

    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;
    cout << "Ingrese los numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Tercer numero: ";
    cin >> n3;
    cout << "Cuarto numero: ";
    cin >> n4;
    cout << "Quinto numero: ";
    cin >> n5;

    bool verificarTodosMayores(n1 > referencia && n2 > referencia && n3 > referencia && n4 > referencia && n5 > referencia);
    bool verificarTodosMenores(n1 < referencia && n2 < referencia && n3 < referencia && n4 < referencia && n5 < referencia);
    bool verificarTodosIguales(n1 == referencia && n2 == referencia && n3 == referencia && n4 == referencia && n5 == referencia);

    verificarTodosMayores && cout << "Todos los numeros son mayores que el numero de referencia. " << endl;
    verificarTodosMenores && cout << "Todos los numeros son menores que el numero de referencia. " << endl;
    verificarTodosIguales && cout << "Todos los numeros son iguales que el numero de referencia. " << endl;
    return 0;
}

