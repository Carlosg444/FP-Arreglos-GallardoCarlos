#include <iostream>
using namespace std;

int main() {
    int arreglo[20], n;
    int sumaPos = 0, sumaNeg = 0;

    cout << "Ingrese la cantidad de elementos (max 20): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
        if (arreglo[i] > 0) {
            sumaPos += arreglo[i];
        } else {
            sumaNeg += arreglo[i];
        }
    }

    cout << "Suma de elementos positivos: " << sumaPos << ", Suma de elementos negativos: " << sumaNeg << endl;

    return 0;
}

