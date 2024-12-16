//Elias arzamendia
#include <iostream>
using namespace std;
int sumaDeDosParametros(int n1, int n2){
    return n1 + n2;
}
int main(){
    int n1, n2;
    cout << "ingrese dos numeros: " << endl;
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;

    cout << "el resultado de la suma es: " << sumaDeDosParametros(n1, n2) << endl;
    return 0;
}
