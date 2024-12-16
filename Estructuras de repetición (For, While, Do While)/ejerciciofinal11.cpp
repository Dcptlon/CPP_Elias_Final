//Elias arzamendia
#include <iostream>
using namespace std;
int main(){
    int n, suma;
    do{
        cout << "Ingrese un numero (numero negativo para terminar): ";
        cin >> n;
        if (n >= 0) {
            suma += n;
        }
    }while(n >= 0);
    cout << "la suma total de los numeros es: " << suma << endl;
   return 0;
}
