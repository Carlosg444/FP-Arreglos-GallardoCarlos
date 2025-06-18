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
    cout << "Vector invertido: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
