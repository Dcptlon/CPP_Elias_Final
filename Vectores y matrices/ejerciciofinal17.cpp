//Elias Arzamendia
#include <iostream>
using namespace std;
void intercambiar(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    int n1 = 10, n2 = 20;
    cout << "Antes de intercambiar: a =  " << n1 << " , b = " << n2 << endl;
    intercambiar(n1, n2);
    cout << "Despues de intercambiar: a =  " << n1 << " , b = " << n2 << endl;
    return 0;
}
