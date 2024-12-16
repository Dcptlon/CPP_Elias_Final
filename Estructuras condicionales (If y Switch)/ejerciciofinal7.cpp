//Elias arzamendia
#include <iostream>
using namespace std;
void identificadorNumero(int n){
    if(n > 0){
        cout << "El numero ingresado es positivo" << endl;
    }else if(n < 0){
        cout << "El numero ingresado es negativo" << endl;
    }else{
        cout << "El numero ingresado es 0" << endl;
    }
}
int main(){
    int n;
    cout << "ingrese un numero: ";
    cin >> n;
    cout << endl;
    identificadorNumero(n);
    return 0;
}
