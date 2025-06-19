#include <iostream>
using namespace std;

bool estaOrdenado(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arreglo[i] > arreglo[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int arreglo[20], n;

    cout << "Ingrese la cantidad de elementos (max 20): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    if (estaOrdenado(arreglo, n)) {
        cout << "El arreglo esta ordenado." << endl;
    } else {
        cout << "El arreglo no esta ordenado." << endl;
    }

    return 0;
}

