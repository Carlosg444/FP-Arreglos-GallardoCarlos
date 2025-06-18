#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char nombres[10][100];
    int n;
    cout << "Ingrese la cantidad de nombres (max 10): ";
    cin >> n;
    cin.ignore(); // Limpiar el buffer
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        cin.getline(nombres[i], 100);
    }
    // Ordenar alfabéticamente
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nombres[j], nombres[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, nombres[j]);
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(nombres[j + 1], temp);
            }
        }
    }
    cout << "Nombres ordenados: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }
    return 0;
}
