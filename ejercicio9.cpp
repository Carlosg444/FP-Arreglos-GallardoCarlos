#include <iostream>
using namespace std;
int main() {
    int arreglo[20], n;
    cout << "Ingrese la cantidad de elementos (max 20): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    int temp = arreglo[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        arreglo[i] = arreglo[i - 1];
    }
    arreglo[0] = temp; 
    cout << "Vector rotado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
