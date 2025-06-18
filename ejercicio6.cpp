#include <iostream>
using namespace std;
int main() {
    int arreglo[20], n;
    int sumaPar = 0, sumaImpar = 0;
    cout << "Ingrese la cantidad de elementos (max 20): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumaPar += arreglo[i];
        } else {
            sumaImpar += arreglo[i];
        }
    }
    cout << "Suma de indices pares: " << sumaPar << ", Suma de indices impares: " << sumaImpar << endl;
    return 0;
}
