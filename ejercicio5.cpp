#include <iostream>
using namespace std;
int main() {
    int arreglo[20], n;
    int mayor, menor;
    cout << "Ingrese la cantidad de n�meros (max 20): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el n�mero " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    mayor = menor = arreglo[0];
    for (int i = 1; i < n; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }
    cout << "Mayor: " << mayor << ", Menor: " << menor << endl;
    return 0;
}
