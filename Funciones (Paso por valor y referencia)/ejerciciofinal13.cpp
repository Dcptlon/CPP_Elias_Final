//Elias arzamendia
#include <iostream>
#define N 5
using namespace std;
void invertirVector(int vector[N]) {
    for (int i = 0; i < N / 2; i++) {
        int temp = vector[i];
        vector[i] = vector[N - 1 - i];
        vector[N - 1 - i] = temp;
    }
}

int main() {
    int vector[N];
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el elemento en la posicion " << i + 1 << ": " <<endl;
        cin >> vector[i];
    }
    invertirVector(vector);
    cout << "Vector invertido: ";
    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}
